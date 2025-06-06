// Generated by gencpp from file quadrotor_msgs/Gains.msg
// DO NOT EDIT!


#ifndef QUADROTOR_MSGS_MESSAGE_GAINS_H
#define QUADROTOR_MSGS_MESSAGE_GAINS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace quadrotor_msgs
{
template <class ContainerAllocator>
struct Gains_
{
  typedef Gains_<ContainerAllocator> Type;

  Gains_()
    : Kp(0.0)
    , Kd(0.0)
    , Kp_yaw(0.0)
    , Kd_yaw(0.0)  {
    }
  Gains_(const ContainerAllocator& _alloc)
    : Kp(0.0)
    , Kd(0.0)
    , Kp_yaw(0.0)
    , Kd_yaw(0.0)  {
  (void)_alloc;
    }



   typedef double _Kp_type;
  _Kp_type Kp;

   typedef double _Kd_type;
  _Kd_type Kd;

   typedef double _Kp_yaw_type;
  _Kp_yaw_type Kp_yaw;

   typedef double _Kd_yaw_type;
  _Kd_yaw_type Kd_yaw;





  typedef boost::shared_ptr< ::quadrotor_msgs::Gains_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::quadrotor_msgs::Gains_<ContainerAllocator> const> ConstPtr;

}; // struct Gains_

typedef ::quadrotor_msgs::Gains_<std::allocator<void> > Gains;

typedef boost::shared_ptr< ::quadrotor_msgs::Gains > GainsPtr;
typedef boost::shared_ptr< ::quadrotor_msgs::Gains const> GainsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::quadrotor_msgs::Gains_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::quadrotor_msgs::Gains_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace quadrotor_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'quadrotor_msgs': ['/home/juchunyu/catkin_ws/src/Fast-Planner-master/uav_simulator/utils/quadrotor_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::quadrotor_msgs::Gains_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::quadrotor_msgs::Gains_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::quadrotor_msgs::Gains_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::quadrotor_msgs::Gains_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::quadrotor_msgs::Gains_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::quadrotor_msgs::Gains_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::quadrotor_msgs::Gains_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b82763b9f24e5595e2a816aa779c9461";
  }

  static const char* value(const ::quadrotor_msgs::Gains_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb82763b9f24e5595ULL;
  static const uint64_t static_value2 = 0xe2a816aa779c9461ULL;
};

template<class ContainerAllocator>
struct DataType< ::quadrotor_msgs::Gains_<ContainerAllocator> >
{
  static const char* value()
  {
    return "quadrotor_msgs/Gains";
  }

  static const char* value(const ::quadrotor_msgs::Gains_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::quadrotor_msgs::Gains_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 Kp\n\
float64 Kd\n\
float64 Kp_yaw\n\
float64 Kd_yaw\n\
";
  }

  static const char* value(const ::quadrotor_msgs::Gains_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::quadrotor_msgs::Gains_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.Kp);
      stream.next(m.Kd);
      stream.next(m.Kp_yaw);
      stream.next(m.Kd_yaw);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Gains_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::quadrotor_msgs::Gains_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::quadrotor_msgs::Gains_<ContainerAllocator>& v)
  {
    s << indent << "Kp: ";
    Printer<double>::stream(s, indent + "  ", v.Kp);
    s << indent << "Kd: ";
    Printer<double>::stream(s, indent + "  ", v.Kd);
    s << indent << "Kp_yaw: ";
    Printer<double>::stream(s, indent + "  ", v.Kp_yaw);
    s << indent << "Kd_yaw: ";
    Printer<double>::stream(s, indent + "  ", v.Kd_yaw);
  }
};

} // namespace message_operations
} // namespace ros

#endif // QUADROTOR_MSGS_MESSAGE_GAINS_H
