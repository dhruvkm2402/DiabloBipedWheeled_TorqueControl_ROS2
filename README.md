# DiabloBipedWheeled_TorqueControl_ROS2
This repository contains instructions on how you can do a low level control of the Diablo Biped-Wheeled robot by DirectDrive Tech.
Diablo is a low cost (<=7500 USD :) ) ROS2 capable biped-wheeled robot capable of self-balancing and achieving various dynamic maneuvers.
Following are the instructions on how you can achieve low-level torque control of the six motors.

I've created a custom Torque.msg that is used for publishing and subscribing to six torque values. Diablo robot comes with six motors. (Hip, Knee and Wheels).
There is a package called jointctrl that has the script diablo_torque.cpp in the src directory.
# Build the package.
```bash
colcon build jointctrlsdk
```
Eventually, as you make changes, you'd want to avoid rebuilding every package. For that use the following command
```bash
--packages-select jointctrlsdk
```

https://github.com/dhruvkm2402/DiabloBipedWheeled_TorqueControl_ROS2/assets/99369975/685b6bbe-f0a1-4cad-b627-e5498a12e44b


This repository is under active development
