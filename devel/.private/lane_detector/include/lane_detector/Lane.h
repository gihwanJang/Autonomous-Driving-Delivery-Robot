// Generated by gencpp from file lane_detector/Lane.msg
// DO NOT EDIT!


#ifndef LANE_DETECTOR_MESSAGE_LANE_H
#define LANE_DETECTOR_MESSAGE_LANE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <lane_detector/Curve.h>

namespace lane_detector
{
template <class ContainerAllocator>
struct Lane_
{
  typedef Lane_<ContainerAllocator> Type;

  Lane_()
    : header()
    , lane_curves()  {
    }
  Lane_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , lane_curves(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::lane_detector::Curve_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::lane_detector::Curve_<ContainerAllocator> >> _lane_curves_type;
  _lane_curves_type lane_curves;





  typedef boost::shared_ptr< ::lane_detector::Lane_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::lane_detector::Lane_<ContainerAllocator> const> ConstPtr;

}; // struct Lane_

typedef ::lane_detector::Lane_<std::allocator<void> > Lane;

typedef boost::shared_ptr< ::lane_detector::Lane > LanePtr;
typedef boost::shared_ptr< ::lane_detector::Lane const> LaneConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::lane_detector::Lane_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::lane_detector::Lane_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::lane_detector::Lane_<ContainerAllocator1> & lhs, const ::lane_detector::Lane_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.lane_curves == rhs.lane_curves;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::lane_detector::Lane_<ContainerAllocator1> & lhs, const ::lane_detector::Lane_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace lane_detector

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::lane_detector::Lane_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::lane_detector::Lane_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::lane_detector::Lane_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::lane_detector::Lane_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::lane_detector::Lane_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::lane_detector::Lane_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::lane_detector::Lane_<ContainerAllocator> >
{
  static const char* value()
  {
    return "195c77843ea3e8095e18ed577fa2d3a2";
  }

  static const char* value(const ::lane_detector::Lane_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x195c77843ea3e809ULL;
  static const uint64_t static_value2 = 0x5e18ed577fa2d3a2ULL;
};

template<class ContainerAllocator>
struct DataType< ::lane_detector::Lane_<ContainerAllocator> >
{
  static const char* value()
  {
    return "lane_detector/Lane";
  }

  static const char* value(const ::lane_detector::Lane_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::lane_detector::Lane_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"Curve[] lane_curves\n"
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
"MSG: lane_detector/Curve\n"
"float32 a\n"
"float32 b\n"
"float32 c\n"
;
  }

  static const char* value(const ::lane_detector::Lane_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::lane_detector::Lane_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.lane_curves);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Lane_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::lane_detector::Lane_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::lane_detector::Lane_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "lane_curves[]" << std::endl;
    for (size_t i = 0; i < v.lane_curves.size(); ++i)
    {
      s << indent << "  lane_curves[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::lane_detector::Curve_<ContainerAllocator> >::stream(s, indent + "    ", v.lane_curves[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // LANE_DETECTOR_MESSAGE_LANE_H
