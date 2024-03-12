cmake_minimum_required(VERSION 3.0.2)
project(robot_info)

find_package(catkin REQUIRED COMPONENTS
  robotinfo_msgs
  roscpp
)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES robot_info
   CATKIN_DEPENDS robotinfo_msgs roscpp
#  DEPENDS system_lib
)

include_directories(
  include
  ${catkin_INCLUDE_DIRS}
)

add_executable(${PROJECT_NAME}_node src/${PROJECT_NAME}_main.cpp 
									src/${PROJECT_NAME}_class.cpp)
									
add_executable(agv_${PROJECT_NAME}_node src/agv_${PROJECT_NAME}_main.cpp 
										src/agv_${PROJECT_NAME}_class.cpp 
										src/${PROJECT_NAME}_class.cpp 
										src/hydraulic_system_monitor.cpp)

target_link_libraries(${PROJECT_NAME}_node ${catkin_LIBRARIES})
target_link_libraries(agv_${PROJECT_NAME}_node ${catkin_LIBRARIES})