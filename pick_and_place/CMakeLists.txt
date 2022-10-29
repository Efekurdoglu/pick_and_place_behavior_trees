cmake_minimum_required(VERSION 3.5)

project(pick_and_place VERSION 1.0.0)
project(pick_and_place LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(behaviortree_cpp_v3)

set(NAME "Efe Kurdoglu")
message("This project has been created by ${NAME}.")

add_library(libraries
            src/approach_object.cpp
            src/gripper_interface.cpp
            src/system_status.cpp)

add_executable(main
            src/main.cpp) 
            
target_include_directories(libraries PUBLIC include)
target_link_libraries(main PUBLIC libraries)
target_link_libraries(libraries PUBLIC BT::behaviortree_cpp_v3)