#include "robot_info/robot_info_class.h"

RobotInfo::RobotInfo(ros::NodeHandle nh) 
{
    publisher = nh.advertise<robotinfo_msgs::RobotInfo10Fields>("/robot_info", 10);
    robot_description = "robot_description: Mir100";
    serial_number = "serial_number: 567A359";
    ip_address = "ip_address: 169.254.5.180";
    firmware_version = "firmware_version: 3.5.8";
}

RobotInfo::~RobotInfo() 
{
    // Destructor content if needed
}

void RobotInfo::publish_data() 
{
    ROS_INFO("Publishing data in /robot_info topic");
    robotinfo_msgs::RobotInfo10Fields msg;
    msg.data_field_01 = robot_description;
    msg.data_field_02 = serial_number;
    msg.data_field_03 = ip_address;
    msg.data_field_04 = firmware_version;
    publisher.publish(msg);
}
