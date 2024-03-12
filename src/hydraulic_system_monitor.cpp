#include "robot_info/hydraulic_system_monitor.h"

HydraulicSystemMonitor::HydraulicSystemMonitor()
{
    hydraulic_oil_temperature = "hydraulic_oil_temperature: 45C";
    hydraulic_oil_tank_fill_level = "hydraulic_oil_tank_fill_level: 100%"; 
    hydraulic_oil_pressure = "hydraulic_oil_pressure: 250 bar";
}

HydraulicSystemMonitor::~HydraulicSystemMonitor() 
{
    
}

std::vector<std::string> HydraulicSystemMonitor::get_hydraulic_data() 
{
    std::vector<std::string> data;
    data.push_back(hydraulic_oil_temperature);
    data.push_back(hydraulic_oil_tank_fill_level);
    data.push_back(hydraulic_oil_pressure);
    return data;
}
