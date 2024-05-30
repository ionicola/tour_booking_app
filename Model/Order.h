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
    vector<Room> rooms;
    string price;

public:
    Order();
    Order(string username, string id, string tourId, string vehicleId, string accommodationId, string number_of_people, vector<Room> rooms, string price);
    string getUsername();
    string getId();
    string getTourId();
    string getVehicleId();
    string getAccommodationId();
    string getNumberOfPeople();
    vector<Room> getRooms();
    string getPrice();
    void setUsername(string username);
    void setId(string id);
    void setTourId(string tourId);
    void setVehicleId(string vehicleId);
    void setAccommodationId(string accommodationId);
    void setNumberOfPeople(string number_of_people);
    void setRooms(vector<Room> rooms);
    void setPrice(string price);
    Order &operator=(const Order &other);
};
#include "Order.h"
#endif