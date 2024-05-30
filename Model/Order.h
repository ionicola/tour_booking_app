#ifndef ORDER
#define ORDER
#include "../Ultilities/Library.h"
#include "Tour.h"
#include "Vehicle.h"
#include "Accommodation.h"
class Order
{
private:
    string username;
    string id;
    string tourId;
    string vehicleId;
    string accommodationId;
    string number_of_people;
    string price;
};

#endif