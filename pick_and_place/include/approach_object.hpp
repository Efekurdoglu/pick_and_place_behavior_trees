#ifndef __APPROACH_OBJECT_HPP
#define __APPROACH_OBECT_HPP

#include <iostream>
#include <chrono>
#include "behaviortree_cpp_v3/action_node.h"
#include "behaviortree_cpp_v3/bt_factory.h"

using namespace std::chrono_literals;

class approach_object : public BT::SyncActionNode
{

public:
    explicit approach_object(const std::string &name);
    BT::NodeStatus tick() override;

};

#endif