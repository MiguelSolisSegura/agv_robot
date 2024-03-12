#ifndef AGV_ROBOT_INFO_H
#define AGV_ROBOT_INFO_H

#include "robot_info/robot_info_class.h"
#include "robot_info/hydraulic_system_monitor.h"
#include <string>

class AGVRobotInfo : public RobotInfo
{
    protected:
        std::string maximum_payload;
        HydraulicSystemMonitor hydraulic_monitor;

    public:
        // Constructor
        AGVRobotInfo(ros::NodeHandle nh);
        // Destructor
        ~AGVRobotInfo();
        // Publish the robot information
        void publish_data() override;
};

#endif // AGV_ROBOT_INFO_H