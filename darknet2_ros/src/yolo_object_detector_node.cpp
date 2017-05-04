/*
 * yolo_obstacle_detector_node.cpp
 *
 *  Created on: Dec 19, 2016
 *      Author: Marko Bjelonic
 *   Institute: ETH Zurich, Robotic Systems Lab
 */

#include <ros/ros.h>
#include "darknet2_ros/YoloObjectDetector.h"

int main(int argc, char** argv) {
  ros::init(argc, argv, "darknet2_ros");
  ros::NodeHandle nodeHandle("~");
  darknet2_ros::YoloObjectDetector yoloObjectDetector(nodeHandle);

  ros::spin();
  return 0;
}
