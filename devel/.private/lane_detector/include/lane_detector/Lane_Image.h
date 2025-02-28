// Generated by gencpp from file lane_detector/Lane_Image.msg
// DO NOT EDIT!


#ifndef LANE_DETECTOR_MESSAGE_LANE_IMAGE_H
#define LANE_DETECTOR_MESSAGE_LANE_IMAGE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <sensor_msgs/Image.h>
#include <sensor_msgs/Image.h>

namespace lane_detector
{
template <class ContainerAllocator>
struct Lane_Image_
{
  typedef Lane_Image_<ContainerAllocator> Type;

  Lane_Image_()
    : header()
    , original_image()
    , lane_mask()  {
    }
  Lane_Image_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , original_image(_alloc)
    , lane_mask(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::sensor_msgs::Image_<ContainerAllocator>  _original_image_type;
  _original_image_type original_image;

   typedef  ::sensor_msgs::Image_<ContainerAllocator>  _lane_mask_type;
  _lane_mask_type lane_mask;





  typedef boost::shared_ptr< ::lane_detector::Lane_Image_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::lane_detector::Lane_Image_<ContainerAllocator> const> ConstPtr;

}; // struct Lane_Image_

typedef ::lane_detector::Lane_Image_<std::allocator<void> > Lane_Image;

typedef boost::shared_ptr< ::lane_detector::Lane_Image > Lane_ImagePtr;
typedef boost::shared_ptr< ::lane_detector::Lane_Image const> Lane_ImageConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::lane_detector::Lane_Image_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::lane_detector::Lane_Image_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::lane_detector::Lane_Image_<ContainerAllocator1> & lhs, const ::lane_detector::Lane_Image_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.original_image == rhs.original_image &&
    lhs.lane_mask == rhs.lane_mask;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::lane_detector::Lane_Image_<ContainerAllocator1> & lhs, const ::lane_detector::Lane_Image_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace lane_detector

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::lane_detector::Lane_Image_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::lane_detector::Lane_Image_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::lane_detector::Lane_Image_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::lane_detector::Lane_Image_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::lane_detector::Lane_Image_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::lane_detector::Lane_Image_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::lane_detector::Lane_Image_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ba6c3de8d4d49b2a6f0c4fbd559c12fc";
  }

  static const char* value(const ::lane_detector::Lane_Image_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xba6c3de8d4d49b2aULL;
  static const uint64_t static_value2 = 0x6f0c4fbd559c12fcULL;
};

template<class ContainerAllocator>
struct DataType< ::lane_detector::Lane_Image_<ContainerAllocator> >
{
  static const char* value()
  {
    return "lane_detector/Lane_Image";
  }

  static const char* value(const ::lane_detector::Lane_Image_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::lane_detector::Lane_Image_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"sensor_msgs/Image original_image\n"
"sensor_msgs/Image lane_mask\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: sensor_msgs/Image\n"
"# This message contains an uncompressed image\n"
"# (0, 0) is at top-left corner of image\n"
"#\n"
"\n"
"Header header        # Header timestamp should be acquisition time of image\n"
"                     # Header frame_id should be optical frame of camera\n"
"                     # origin of frame should be optical center of camera\n"
"                     # +x should point to the right in the image\n"
"                     # +y should point down in the image\n"
"                     # +z should point into to plane of the image\n"
"                     # If the frame_id here and the frame_id of the CameraInfo\n"
"                     # message associated with the image conflict\n"
"                     # the behavior is undefined\n"
"\n"
"uint32 height         # image height, that is, number of rows\n"
"uint32 width          # image width, that is, number of columns\n"
"\n"
"# The legal values for encoding are in file src/image_encodings.cpp\n"
"# If you want to standardize a new string format, join\n"
"# ros-users@lists.sourceforge.net and send an email proposing a new encoding.\n"
"\n"
"string encoding       # Encoding of pixels -- channel meaning, ordering, size\n"
"                      # taken from the list of strings in include/sensor_msgs/image_encodings.h\n"
"\n"
"uint8 is_bigendian    # is this data bigendian?\n"
"uint32 step           # Full row length in bytes\n"
"uint8[] data          # actual matrix data, size is (step * rows)\n"
;
  }

  static const char* value(const ::lane_detector::Lane_Image_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::lane_detector::Lane_Image_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.original_image);
      stream.next(m.lane_mask);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Lane_Image_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::lane_detector::Lane_Image_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::lane_detector::Lane_Image_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "original_image: ";
    s << std::endl;
    Printer< ::sensor_msgs::Image_<ContainerAllocator> >::stream(s, indent + "  ", v.original_image);
    s << indent << "lane_mask: ";
    s << std::endl;
    Printer< ::sensor_msgs::Image_<ContainerAllocator> >::stream(s, indent + "  ", v.lane_mask);
  }
};

} // namespace message_operations
} // namespace ros

#endif // LANE_DETECTOR_MESSAGE_LANE_IMAGE_H
