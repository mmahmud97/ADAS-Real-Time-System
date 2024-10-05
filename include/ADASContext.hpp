#pragma once
#include <vector>
#include <string>

// ADAS context structure for autonomous vehicle data
struct ADASContext {
    float vehicleSpeed;        // Speed of the vehicle in km/h
    float steeringAngle;       // Steering angle in degrees
    std::vector<float> objectDistances; // Distances to nearby objects from sensors (e.g., LIDAR)
    std::string roadCondition; // Road condition (e.g., dry, wet, icy)
};
