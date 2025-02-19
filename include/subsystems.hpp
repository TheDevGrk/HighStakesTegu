#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

inline pros::Motor Conveyor(21);
inline pros::Motor Intake(5);
inline ez::Piston Grabber('A');
inline pros::Optical ColorSensor(20);
inline int conveyorSpeed = 0;