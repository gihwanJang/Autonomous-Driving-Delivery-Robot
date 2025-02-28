;; Auto-generated. Do not edit!


(when (boundp 'lane_detector::Lane_Image)
  (if (not (find-package "LANE_DETECTOR"))
    (make-package "LANE_DETECTOR"))
  (shadow 'Lane_Image (find-package "LANE_DETECTOR")))
(unless (find-package "LANE_DETECTOR::LANE_IMAGE")
  (make-package "LANE_DETECTOR::LANE_IMAGE"))

(in-package "ROS")
;;//! \htmlinclude Lane_Image.msg.html
(if (not (find-package "SENSOR_MSGS"))
  (ros::roseus-add-msgs "sensor_msgs"))
(if (not (find-package "STD_MSGS"))
  (ros::roseus-add-msgs "std_msgs"))


(defclass lane_detector::Lane_Image
  :super ros::object
  :slots (_header _original_image _lane_mask ))

(defmethod lane_detector::Lane_Image
  (:init
   (&key
    ((:header __header) (instance std_msgs::Header :init))
    ((:original_image __original_image) (instance sensor_msgs::Image :init))
    ((:lane_mask __lane_mask) (instance sensor_msgs::Image :init))
    )
   (send-super :init)
   (setq _header __header)
   (setq _original_image __original_image)
   (setq _lane_mask __lane_mask)
   self)
  (:header
   (&rest __header)
   (if (keywordp (car __header))
       (send* _header __header)
     (progn
       (if __header (setq _header (car __header)))
       _header)))
  (:original_image
   (&rest __original_image)
   (if (keywordp (car __original_image))
       (send* _original_image __original_image)
     (progn
       (if __original_image (setq _original_image (car __original_image)))
       _original_image)))
  (:lane_mask
   (&rest __lane_mask)
   (if (keywordp (car __lane_mask))
       (send* _lane_mask __lane_mask)
     (progn
       (if __lane_mask (setq _lane_mask (car __lane_mask)))
       _lane_mask)))
  (:serialization-length
   ()
   (+
    ;; std_msgs/Header _header
    (send _header :serialization-length)
    ;; sensor_msgs/Image _original_image
    (send _original_image :serialization-length)
    ;; sensor_msgs/Image _lane_mask
    (send _lane_mask :serialization-length)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; std_msgs/Header _header
       (send _header :serialize s)
     ;; sensor_msgs/Image _original_image
       (send _original_image :serialize s)
     ;; sensor_msgs/Image _lane_mask
       (send _lane_mask :serialize s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; std_msgs/Header _header
     (send _header :deserialize buf ptr-) (incf ptr- (send _header :serialization-length))
   ;; sensor_msgs/Image _original_image
     (send _original_image :deserialize buf ptr-) (incf ptr- (send _original_image :serialization-length))
   ;; sensor_msgs/Image _lane_mask
     (send _lane_mask :deserialize buf ptr-) (incf ptr- (send _lane_mask :serialization-length))
   ;;
   self)
  )

(setf (get lane_detector::Lane_Image :md5sum-) "ba6c3de8d4d49b2a6f0c4fbd559c12fc")
(setf (get lane_detector::Lane_Image :datatype-) "lane_detector/Lane_Image")
(setf (get lane_detector::Lane_Image :definition-)
      "Header header
sensor_msgs/Image original_image
sensor_msgs/Image lane_mask

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

================================================================================
MSG: sensor_msgs/Image
# This message contains an uncompressed image
# (0, 0) is at top-left corner of image
#

Header header        # Header timestamp should be acquisition time of image
                     # Header frame_id should be optical frame of camera
                     # origin of frame should be optical center of camera
                     # +x should point to the right in the image
                     # +y should point down in the image
                     # +z should point into to plane of the image
                     # If the frame_id here and the frame_id of the CameraInfo
                     # message associated with the image conflict
                     # the behavior is undefined

uint32 height         # image height, that is, number of rows
uint32 width          # image width, that is, number of columns

# The legal values for encoding are in file src/image_encodings.cpp
# If you want to standardize a new string format, join
# ros-users@lists.sourceforge.net and send an email proposing a new encoding.

string encoding       # Encoding of pixels -- channel meaning, ordering, size
                      # taken from the list of strings in include/sensor_msgs/image_encodings.h

uint8 is_bigendian    # is this data bigendian?
uint32 step           # Full row length in bytes
uint8[] data          # actual matrix data, size is (step * rows)

")



(provide :lane_detector/Lane_Image "ba6c3de8d4d49b2a6f0c4fbd559c12fc")


