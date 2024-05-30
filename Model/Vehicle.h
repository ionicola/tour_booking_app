#ifndef VEHICLE
#define VEHICLE
#include "../Ultilities/Library.h"
class Vehicle
{
private:
    string id;
    string type;
    string departure;
    string destination;
    string station_departure;
    string station_destination;
    string start;
    string end;
    string time_arrival;
    string time_departure;
    string available_slot;
};

#endif