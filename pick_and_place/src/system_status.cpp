#include "../include/system_status.hpp"

system_status::system_status()
{
    std::cout << "System Maintain Initialized " << std::endl;
}

BT::NodeStatus system_status::check_battery()
{
    std::cout << "Battery OK " << std::endl;
    return BT::NodeStatus::SUCCESS;
}
