# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include;/usr/include/opencv4".split(';') if "${prefix}/include;/usr/include/opencv4" != "" else []
PROJECT_CATKIN_DEPENDS = "rosconsole;sensor_msgs".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-lcv_bridge;/usr/lib/aarch64-linux-gnu/libopencv_core.so.4.5.4;/usr/lib/aarch64-linux-gnu/libopencv_imgproc.so.4.5.4;/usr/lib/aarch64-linux-gnu/libopencv_imgcodecs.so.4.5.4".split(';') if "-lcv_bridge;/usr/lib/aarch64-linux-gnu/libopencv_core.so.4.5.4;/usr/lib/aarch64-linux-gnu/libopencv_imgproc.so.4.5.4;/usr/lib/aarch64-linux-gnu/libopencv_imgcodecs.so.4.5.4" != "" else []
PROJECT_NAME = "cv_bridge"
PROJECT_SPACE_DIR = "/home/jetson/Self-Driving-Delivery-Robot/install"
PROJECT_VERSION = "1.13.0"
