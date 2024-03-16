# Robot Info ROS Package

## Overview

The `robot_info` package is designed for ROS (Robot Operating System) and is a crucial part of a project aimed at creating a user-friendly graphical interface for robot teleoperation and monitoring. This package provides a ROS node that publishes essential information about a robot, such as its description, serial number, IP address, firmware version, and more. It serves as the backend support for a GUI application, enabling users to interact with and control robots more efficiently.

## Installation

### Prerequisites

- ROS (Kinetic, Melodic, Noetic, or compatible versions)
- catkin workspace
- C++11 compiler

### Setup

1. Navigate to your catkin workspace's source directory:
   ```sh
   cd ~/catkin_ws/src
   ```
2. Clone the `robot_info` package:
   ```sh
   git clone https://github.com/your_username/robot_info.git
   ```
3. Compile the package:
   ```sh
   cd ~/catkin_ws
   catkin_make
   ```
4. Source the ROS environment:
   ```sh
   source devel/setup.bash
   ```

## Usage

To use the `robot_info` package and launch the robot info node:

1. Start the ROS core if it's not already running:
   ```sh
   roscore &
   ```
2. Launch the robot info node:
   ```sh
   rosrun robot_info robot_info_node
   ```
3. To observe the published robot information, open another terminal and subscribe to the `robot_info` topic:
   ```sh
   rostopic echo /robot_info
   ```

### Expected Output

Upon successful execution, the `robot_info` node will publish messages to the `/robot_info` topic, which can be viewed using `rostopic echo`. The messages include:

- robot_description
- serial_number
- ip_address
- firmware_version

And if you are using the `agv_robot_info_node` executable, additional information such as `maximum_payload`, along with optional hydraulic system data, will also be published.
