/**

* This routine will publish the /company_info topic, the message type is the custom learn_topic::Information

*/

#include <ros/ros.h>

#include "learn_topic/Information.h"

int main(int argc, char **argv)

{

    // ROS node initialization

    ros::init(argc, argv, "company_Information_publisher");

    // Create node handle

    ros::NodeHandle n;

    // Create a Publisher, publish a topic named /company_info, the message type is learn_topic::Person, and the queue length is 10

    ros::Publisher Information_pub = n.advertise<learn_topic::Information>("/company_info", 10);

    // Set the loop frequency

    ros::Rate loop_rate(1);

    int count = 0;

    while (ros::ok())

    {

        // Initialize messages of type learn_topic::Information

        learn_topic::Information info_msg;

        info_msg.company = "Yahboom";

        info_msg.city = "Shenzhen";

        // Release the news

        Information_pub.publish(info_msg);

        ROS_INFO("Information: company:%s city:%s ",info_msg.company.c_str(), info_msg.city.c_str());

        loop_rate.sleep();// Delay according to cycle frequency

    }

    return 0;

}