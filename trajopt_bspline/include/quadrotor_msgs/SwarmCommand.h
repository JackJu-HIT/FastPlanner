// Generated by gencpp from file quadrotor_msgs/SwarmCommand.msg
// DO NOT EDIT!


#ifndef QUADROTOR_MSGS_MESSAGE_SWARMCOMMAND_H
#define QUADROTOR_MSGS_MESSAGE_SWARMCOMMAND_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <nav_msgs/Path.h>

namespace quadrotor_msgs
{
template <class ContainerAllocator>
struct SwarmCommand_
{
  typedef SwarmCommand_<ContainerAllocator> Type;

  SwarmCommand_()
    : header()
    , selection()
    , plan()
    , formation()  {
    }
  SwarmCommand_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , selection(_alloc)
    , plan(_alloc)
    , formation(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _selection_type;
  _selection_type selection;

   typedef  ::nav_msgs::Path_<ContainerAllocator>  _plan_type;
  _plan_type plan;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _formation_type;
  _formation_type formation;





  typedef boost::shared_ptr< ::quadrotor_msgs::SwarmCommand_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::quadrotor_msgs::SwarmCommand_<ContainerAllocator> const> ConstPtr;

}; // struct SwarmCommand_

typedef ::quadrotor_msgs::SwarmCommand_<std::allocator<void> > SwarmCommand;

typedef boost::shared_ptr< ::quadrotor_msgs::SwarmCommand > SwarmCommandPtr;
typedef boost::shared_ptr< ::quadrotor_msgs::SwarmCommand const> SwarmCommandConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::quadrotor_msgs::SwarmCommand_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::quadrotor_msgs::SwarmCommand_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::quadrotor_msgs::SwarmCommand_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::quadrotor_msgs::SwarmCommand_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::quadrotor_msgs::SwarmCommand_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::quadrotor_msgs::SwarmCommand_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::quadrotor_msgs::SwarmCommand_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::quadrotor_msgs::SwarmCommand_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::quadrotor_msgs::SwarmCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fb2553d3cc9aea3fc90865317210e00c";
  }

  static const char* value(const ::quadrotor_msgs::SwarmCommand_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfb2553d3cc9aea3fULL;
  static const uint64_t static_value2 = 0xc90865317210e00cULL;
};

template<class ContainerAllocator>
struct DataType< ::quadrotor_msgs::SwarmCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "quadrotor_msgs/SwarmCommand";
  }

  static const char* value(const ::quadrotor_msgs::SwarmCommand_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::quadrotor_msgs::SwarmCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#data structure\n\
Header        header\n\
int32[]       selection\n\
nav_msgs/Path plan\n\
float32[]     formation #todo implement related code\n\
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
MSG: nav_msgs/Path\n\
#An array of poses that represents a Path for a robot to follow\n\
Header header\n\
geometry_msgs/PoseStamped[] poses\n\
\n\
================================================================================\n\
MSG: geometry_msgs/PoseStamped\n\
# A Pose with reference coordinate frame and timestamp\n\
Header header\n\
Pose pose\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of position and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::quadrotor_msgs::SwarmCommand_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::quadrotor_msgs::SwarmCommand_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.selection);
      stream.next(m.plan);
      stream.next(m.formation);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SwarmCommand_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::quadrotor_msgs::SwarmCommand_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::quadrotor_msgs::SwarmCommand_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "selection[]" << std::endl;
    for (size_t i = 0; i < v.selection.size(); ++i)
    {
      s << indent << "  selection[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.selection[i]);
    }
    s << indent << "plan: ";
    s << std::endl;
    Printer< ::nav_msgs::Path_<ContainerAllocator> >::stream(s, indent + "  ", v.plan);
    s << indent << "formation[]" << std::endl;
    for (size_t i = 0; i < v.formation.size(); ++i)
    {
      s << indent << "  formation[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.formation[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // QUADROTOR_MSGS_MESSAGE_SWARMCOMMAND_H
