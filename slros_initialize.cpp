#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "followerstoppermax";

// For Block followerstoppermax/Subscribe
SimulinkSubscriber<std_msgs::Float64, SL_Bus_followerstoppermax_std_msgs_Float64> Sub_followerstoppermax_429;

// For Block followerstoppermax/Subscribe4
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_followerstoppermax_geometry_msgs_Twist> Sub_followerstoppermax_430;

// For Block followerstoppermax/Subscribe5
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_followerstoppermax_geometry_msgs_Twist> Sub_followerstoppermax_431;

// For Block followerstoppermax/Follower StopperMax Switch/Publish1
SimulinkPublisher<std_msgs::Float64, SL_Bus_followerstoppermax_std_msgs_Float64> Pub_followerstoppermax_452;

// For Block followerstoppermax/Publish Region1/Publish1
SimulinkPublisher<std_msgs::UInt8, SL_Bus_followerstoppermax_std_msgs_UInt8> Pub_followerstoppermax_406;

// For Block followerstoppermax/Publish1
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_followerstoppermax_geometry_msgs_Twist> Pub_followerstoppermax_401;

// For Block followerstoppermax/Follower StopperMax Switch/Get Parameter1
SimulinkParameterGetter<real64_T, double> ParamGet_followerstoppermax_447;

// For Block followerstoppermax/Follower StopperMax Switch/Get Parameter2
SimulinkParameterGetter<real64_T, double> ParamGet_followerstoppermax_448;

// For Block followerstoppermax/Follower StopperMax Switch/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_followerstoppermax_449;

// For Block followerstoppermax/Follower StopperMax Switch/Get Parameter4
SimulinkParameterGetter<real64_T, double> ParamGet_followerstoppermax_450;

// For Block followerstoppermax/Follower StopperMax Switch/Get Parameter5
SimulinkParameterGetter<real64_T, double> ParamGet_followerstoppermax_463;

// For Block followerstoppermax/Follower StopperMax Switch/Get Parameter6
SimulinkParameterGetter<real64_T, double> ParamGet_followerstoppermax_465;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

