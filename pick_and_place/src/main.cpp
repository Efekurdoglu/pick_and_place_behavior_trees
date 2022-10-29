#include "../include/gripper_interface.hpp"
#include "../include/approach_object.hpp"
#include "../include/system_status.hpp"

int main()
{
    BT::BehaviorTreeFactory factory;

    factory.registerNodeType<approach_object>("approach_object");
    factory.registerSimpleCondition("check_battery", std::bind(system_status::check_battery));

    gripper_interface gripper;

    factory.registerSimpleAction("open_gripper", std::bind(&gripper_interface::open, &gripper));
    factory.registerSimpleAction("close_gripper", std::bind(&gripper_interface::close, &gripper));

    // A created tree which could be extracted from the XML file
    auto tree = factory.createTreeFromFile("./../xml/pick_and_place.xml");

    // Executing the tree
    tree.tickRoot();

    return 0;
}
