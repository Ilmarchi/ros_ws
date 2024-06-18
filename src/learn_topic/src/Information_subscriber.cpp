/**

* This routine will subscribe to the /company_info topic and customize the message type learn_topic::Information

*/

#include <ros/ros.h>

#include "learn_topic/Information.h"

// After receiving the subscribed message, the message callback function will be entered to process the data.

void CompanyInfoCallback(const learn_topic::Information::ConstPtr& msg)

{

    // Print received messages

    ROS_INFO("This is: %s in %s", msg->company.c_str(), msg->city.c_str());

}

int main(int argc, char **argv)

{

    ros::init(argc, argv, "company_Information_subscriber");// Initialize ROS node

    ros::NodeHandle n;// Here is the created node handle

    // Create a Subscriber, subscribe to the topic named topic/company_info, and register the callback function CompanyInfoCallback

    ros::Subscriber person_info_sub = n.subscribe("/company_info", 10,CompanyInfoCallback);

    ros::spin();// Loop waiting for callback function

    return 0;

}