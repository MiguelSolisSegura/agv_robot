#include "robot_info/agv_robot_info_class.h"

AGVRobotInfo::AGVRobotInfo(ros::NodeHandle nh) : RobotInfo(nh)
{
    maximum_payload = "maximum_payload: 100 Kg";
}

AGVRobotInfo::~AGVRobotInfo() 
{
    
}

void AGVRobotInfo::publish_data() 
{
    ROS_INFO("Publishing data in /robot_info topic");
    robotinfo_msgs::RobotInfo10Fields msg;
    msg.data_field_01 = robot_description;
    msg.data_field_02 = serial_number;
    msg.data_field_03 = ip_address;
    msg.data_field_04 = firmware_version;
    msg.data_field_05 = maximum_payload;
    publisher.publish(msg);
}