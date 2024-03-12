#ifndef HYDRAULIC_SYSTEM_MONITOR_H
#define HYDRAULIC_SYSTEM_MONITOR_H

#include <string>
#include <vector>

class HydraulicSystemMonitor
{
    public:
        // Constructor
        HydraulicSystemMonitor();
        // Destructor
        ~HydraulicSystemMonitor();
        // Publish the robot information
        std::vector<std::string> get_hydraulic_data();
        // Variables
        std::string hydraulic_oil_temperature;
        std::string hydraulic_oil_tank_fill_level;
        std::string hydraulic_oil_pressure;
};

#endif // HYDRAULIC_SYSTEM_MONITOR_H