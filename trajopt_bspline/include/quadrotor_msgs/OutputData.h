// Generated by gencpp from file quadrotor_msgs/OutputData.msg
// DO NOT EDIT!


#ifndef QUADROTOR_MSGS_MESSAGE_OUTPUTDATA_H
#define QUADROTOR_MSGS_MESSAGE_OUTPUTDATA_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Quaternion.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>

namespace quadrotor_msgs
{
template <class ContainerAllocator>
struct OutputData_
{
  typedef OutputData_<ContainerAllocator> Type;

  OutputData_()
    : header()
    , loop_rate(0)
    , voltage(0.0)
    , orientation()
    , angular_velocity()
    , linear_acceleration()
    , pressure_dheight(0.0)
    , pressure_height(0.0)
    , magnetic_field()
    , radio_channel()
    , seq(0)  {
      radio_channel.assign(0);
  }
  OutputData_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , loop_rate(0)
    , voltage(0.0)
    , orientation(_alloc)
    , angular_velocity(_alloc)
    , linear_acceleration(_alloc)
    , pressure_dheight(0.0)
    , pressure_height(0.0)
    , magnetic_field(_alloc)
    , radio_channel()
    , seq(0)  {
  (void)_alloc;
      radio_channel.assign(0);
  }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint16_t _loop_rate_type;
  _loop_rate_type loop_rate;

   typedef double _voltage_type;
  _voltage_type voltage;

   typedef  ::geometry_msgs::Quaternion_<ContainerAllocator>  _orientation_type;
  _orientation_type orientation;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _angular_velocity_type;
  _angular_velocity_type angular_velocity;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _linear_acceleration_type;
  _linear_acceleration_type linear_acceleration;

   typedef double _pressure_dheight_type;
  _pressure_dheight_type pressure_dheight;

   typedef double _pressure_height_type;
  _pressure_height_type pressure_height;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _magnetic_field_type;
  _magnetic_field_type magnetic_field;

   typedef boost::array<uint8_t, 8>  _radio_channel_type;
  _radio_channel_type radio_channel;

   typedef uint8_t _seq_type;
  _seq_type seq;





  typedef boost::shared_ptr< ::quadrotor_msgs::OutputData_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::quadrotor_msgs::OutputData_<ContainerAllocator> const> ConstPtr;

}; // struct OutputData_

typedef ::quadrotor_msgs::OutputData_<std::allocator<void> > OutputData;

typedef boost::shared_ptr< ::quadrotor_msgs::OutputData > OutputDataPtr;
typedef boost::shared_ptr< ::quadrotor_msgs::OutputData const> OutputDataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::quadrotor_msgs::OutputData_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::quadrotor_msgs::OutputData_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace quadrotor_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'quadrotor_msgs': ['/home/juchunyu/catkin_ws/src/Fast-Planner-master/uav_simulator/utils/quadrotor_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::quadrotor_msgs::OutputData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::quadrotor_msgs::OutputData_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::quadrotor_msgs::OutputData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::quadrotor_msgs::OutputData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::quadrotor_msgs::OutputData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::quadrotor_msgs::OutputData_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::quadrotor_msgs::OutputData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5759ee97fd5c090dcdccf7fc3e50d024";
  }

  static const char* value(const ::quadrotor_msgs::OutputData_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5759ee97fd5c090dULL;
  static const uint64_t static_value2 = 0xcdccf7fc3e50d024ULL;
};

template<class ContainerAllocator>
struct DataType< ::quadrotor_msgs::OutputData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "quadrotor_msgs/OutputData";
  }

  static const char* value(const ::quadrotor_msgs::OutputData_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::quadrotor_msgs::OutputData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
uint16 loop_rate\n\
float64 voltage\n\
geometry_msgs/Quaternion orientation\n\
geometry_msgs/Vector3 angular_velocity\n\
geometry_msgs/Vector3 linear_acceleration\n\
float64 pressure_dheight\n\
float64 pressure_height\n\
geometry_msgs/Vector3 magnetic_field\n\
uint8[8] radio_channel\n\
#uint8[4] motor_rpm\n\
uint8 seq\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
# It is only meant to represent a direction. Therefore, it does not\n\
# make sense to apply a translation to it (e.g., when applying a \n\
# generic rigid transformation to a Vector3, tf2 will only apply the\n\
# rotation). If you want your data to be translatable too, use the\n\
# geometry_msgs/Point message instead.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::quadrotor_msgs::OutputData_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::quadrotor_msgs::OutputData_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.loop_rate);
      stream.next(m.voltage);
      stream.next(m.orientation);
      stream.next(m.angular_velocity);
      stream.next(m.linear_acceleration);
      stream.next(m.pressure_dheight);
      stream.next(m.pressure_height);
      stream.next(m.magnetic_field);
      stream.next(m.radio_channel);
      stream.next(m.seq);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct OutputData_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::quadrotor_msgs::OutputData_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::quadrotor_msgs::OutputData_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "loop_rate: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.loop_rate);
    s << indent << "voltage: ";
    Printer<double>::stream(s, indent + "  ", v.voltage);
    s << indent << "orientation: ";
    s << std::endl;
    Printer< ::geometry_msgs::Quaternion_<ContainerAllocator> >::stream(s, indent + "  ", v.orientation);
    s << indent << "angular_velocity: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.angular_velocity);
    s << indent << "linear_acceleration: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.linear_acceleration);
    s << indent << "pressure_dheight: ";
    Printer<double>::stream(s, indent + "  ", v.pressure_dheight);
    s << indent << "pressure_height: ";
    Printer<double>::stream(s, indent + "  ", v.pressure_height);
    s << indent << "magnetic_field: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.magnetic_field);
    s << indent << "radio_channel[]" << std::endl;
    for (size_t i = 0; i < v.radio_channel.size(); ++i)
    {
      s << indent << "  radio_channel[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.radio_channel[i]);
    }
    s << indent << "seq: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.seq);
  }
};

} // namespace message_operations
} // namespace ros

#endif // QUADROTOR_MSGS_MESSAGE_OUTPUTDATA_H
