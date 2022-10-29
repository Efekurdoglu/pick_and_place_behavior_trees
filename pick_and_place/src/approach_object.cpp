#include "../include/approach_object.hpp"
#include "behaviortree_cpp_v3/action_node.h"
#include "behaviortree_cpp_v3/bt_factory.h"

approach_object::approach_object(const std::string &name) : BT::SyncActionNode(name, {})
{

}

BT::NodeStatus approach_object::tick() 
{
    std::cout << "Approach Object: " << this->name() << std::endl;
    std::this_thread::sleep_for(1s);
    auto success = BT::NodeStatus::SUCCESS;

    return success;
}