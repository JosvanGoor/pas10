// Generated by gencpp from file basic_exercises/pixelcountActionGoal.msg
// DO NOT EDIT!


#ifndef BASIC_EXERCISES_MESSAGE_PIXELCOUNTACTIONGOAL_H
#define BASIC_EXERCISES_MESSAGE_PIXELCOUNTACTIONGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <actionlib_msgs/GoalID.h>
#include <basic_exercises/pixelcountGoal.h>

namespace basic_exercises
{
template <class ContainerAllocator>
struct pixelcountActionGoal_
{
  typedef pixelcountActionGoal_<ContainerAllocator> Type;

  pixelcountActionGoal_()
    : header()
    , goal_id()
    , goal()  {
    }
  pixelcountActionGoal_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , goal_id(_alloc)
    , goal(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::actionlib_msgs::GoalID_<ContainerAllocator>  _goal_id_type;
  _goal_id_type goal_id;

   typedef  ::basic_exercises::pixelcountGoal_<ContainerAllocator>  _goal_type;
  _goal_type goal;




  typedef boost::shared_ptr< ::basic_exercises::pixelcountActionGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::basic_exercises::pixelcountActionGoal_<ContainerAllocator> const> ConstPtr;

}; // struct pixelcountActionGoal_

typedef ::basic_exercises::pixelcountActionGoal_<std::allocator<void> > pixelcountActionGoal;

typedef boost::shared_ptr< ::basic_exercises::pixelcountActionGoal > pixelcountActionGoalPtr;
typedef boost::shared_ptr< ::basic_exercises::pixelcountActionGoal const> pixelcountActionGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::basic_exercises::pixelcountActionGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::basic_exercises::pixelcountActionGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace basic_exercises

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'basic_exercises': ['/home/student/catkin_ws/src/basic_exercises/msg', '/home/student/catkin_ws/devel/share/basic_exercises/msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::basic_exercises::pixelcountActionGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::basic_exercises::pixelcountActionGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::basic_exercises::pixelcountActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::basic_exercises::pixelcountActionGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::basic_exercises::pixelcountActionGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::basic_exercises::pixelcountActionGoal_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::basic_exercises::pixelcountActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "48425c0a91f672cee3654f698cea8f27";
  }

  static const char* value(const ::basic_exercises::pixelcountActionGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x48425c0a91f672ceULL;
  static const uint64_t static_value2 = 0xe3654f698cea8f27ULL;
};

template<class ContainerAllocator>
struct DataType< ::basic_exercises::pixelcountActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "basic_exercises/pixelcountActionGoal";
  }

  static const char* value(const ::basic_exercises::pixelcountActionGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::basic_exercises::pixelcountActionGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalID goal_id\n\
pixelcountGoal goal\n\
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
MSG: actionlib_msgs/GoalID\n\
# The stamp should store the time at which this goal was requested.\n\
# It is used by an action server when it tries to preempt all\n\
# goals that were requested before a certain time\n\
time stamp\n\
\n\
# The id provides a way to associate feedback and\n\
# result message with specific goal requests. The id\n\
# specified must be unique.\n\
string id\n\
\n\
\n\
================================================================================\n\
MSG: basic_exercises/pixelcountGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
sensor_msgs/Image rgb\n\
sensor_msgs/Image grey\n\
\n\
================================================================================\n\
MSG: sensor_msgs/Image\n\
# This message contains an uncompressed image\n\
# (0, 0) is at top-left corner of image\n\
#\n\
\n\
Header header        # Header timestamp should be acquisition time of image\n\
                     # Header frame_id should be optical frame of camera\n\
                     # origin of frame should be optical center of cameara\n\
                     # +x should point to the right in the image\n\
                     # +y should point down in the image\n\
                     # +z should point into to plane of the image\n\
                     # If the frame_id here and the frame_id of the CameraInfo\n\
                     # message associated with the image conflict\n\
                     # the behavior is undefined\n\
\n\
uint32 height         # image height, that is, number of rows\n\
uint32 width          # image width, that is, number of columns\n\
\n\
# The legal values for encoding are in file src/image_encodings.cpp\n\
# If you want to standardize a new string format, join\n\
# ros-users@lists.sourceforge.net and send an email proposing a new encoding.\n\
\n\
string encoding       # Encoding of pixels -- channel meaning, ordering, size\n\
                      # taken from the list of strings in include/sensor_msgs/image_encodings.h\n\
\n\
uint8 is_bigendian    # is this data bigendian?\n\
uint32 step           # Full row length in bytes\n\
uint8[] data          # actual matrix data, size is (step * rows)\n\
";
  }

  static const char* value(const ::basic_exercises::pixelcountActionGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::basic_exercises::pixelcountActionGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.goal_id);
      stream.next(m.goal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct pixelcountActionGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::basic_exercises::pixelcountActionGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::basic_exercises::pixelcountActionGoal_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "goal_id: ";
    s << std::endl;
    Printer< ::actionlib_msgs::GoalID_<ContainerAllocator> >::stream(s, indent + "  ", v.goal_id);
    s << indent << "goal: ";
    s << std::endl;
    Printer< ::basic_exercises::pixelcountGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.goal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BASIC_EXERCISES_MESSAGE_PIXELCOUNTACTIONGOAL_H
