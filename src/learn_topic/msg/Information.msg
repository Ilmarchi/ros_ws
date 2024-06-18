//Define custom message type variables

learning_topic::Information info_msg; 

//To copy a defined message, company and city are members of the message

info_msg.company = "Yahboom";

info_msg.city = "Shenzhen";

//Callback function definition data type

void CompanyInfoCallback(const learning_topic::Information::ConstPtr& msg);