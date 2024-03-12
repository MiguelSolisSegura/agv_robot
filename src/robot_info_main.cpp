#include "ros/init.h"
#include "ros/node_handle.h"
#include "ros/rate.h"
#include "ros/ros.h"
#include "robot_info/robot_info_class.h"

int main(int argc, char **argv) {
    ros::init(argc, argv, "robot_info_node");
    ros::NodeHandle nh;
    RobotInfo robot(nh);
    ros::Rate loop_rate(1);
    while (ros::ok()) {
        robot.publish_data();
        ros::spinOnce();
        loop_rate.sleep();
    }
    return 0;
}