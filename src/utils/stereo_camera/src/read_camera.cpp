#include <ros/ros.h>
#include <cv_bridge/cv_bridge.h>
#include <opencv2/highgui/highgui.hpp>

using namespace cv;
using namespace std;

int main(int argc, char **argv){
    ros::init(argc, argv, "read_camera");
    ros::NodeHandle nh;

    cout << "OpenCV version : " << CV_VERSION << "\n";
    cout << "Major version : " << CV_MAJOR_VERSION << "\n";

    double width;
    double height;
    double exposure;
    double brightness;

    Mat img;

    VideoCapture video(0);
    video.set(CAP_PROP_FRAME_WIDTH , 1920);
    video.set(CAP_PROP_FRAME_HEIGHT , 1080);

    if(!video.isOpened()){
        cout << "Can't open Camera" << "\n";
        return -1;
    }

    width = video.get(CAP_PROP_FRAME_WIDTH);
    height = video.get(CAP_PROP_FRAME_HEIGHT);

    cout << "width : " << width << "\n";
    cout << "height : " << height << "\n";

    ros::Rate loop_rate(10);

    while(ros::ok()){
        video >> img;

        imshow("video", img);

        if(waitKey(10) ==27) break;
        ros::spinOnce();
        loop_rate.sleep();
    }
    
    return 0;
}
