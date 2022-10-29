#ifndef __GRIPPER_INTERFACE_HPP
#define __GRIPPER_INTERFACE_HPP

#include <iostream>
#include <string>
#include "behaviortree_cpp_v3/action_node.h"
#include "behaviortree_cpp_v3/bt_factory.h"

class gripper_interface 
{
public:
    gripper_interface();
    BT::NodeStatus open();
    BT::NodeStatus close();

private:
    bool _open;
    BT::NodeStatus success;
};

#endif