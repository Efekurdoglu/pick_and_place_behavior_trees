#include "../include/gripper_interface.hpp"

gripper_interface::gripper_interface() : _open(true)
{

}

BT::NodeStatus gripper_interface::open()
{
    _open = true;
    std::cout << "Gripper open " << std::endl;
    success = BT::NodeStatus::SUCCESS;
    return success;
}

BT::NodeStatus gripper_interface::close()
{
    _open = true;
    std::cout << "Gripper close " << std::endl;
    success = BT::NodeStatus::SUCCESS;
    return success;

}