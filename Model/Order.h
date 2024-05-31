#ifndef ORDER
#define ORDER
#include "../Ultilities/Library.h"
#include "Tour.h"
#include "Vehicle.h"
#include "Accommodation.h"
struct RoomOrdered
{
    string id;
    string name;
    string slot;
    string price;
    string start;
    string end;
};
class Order
{
private:
    string username;
    string id;
    string tourId;
    string vehicleId;
    string accommodationId;
    string number_of_people;
    vector<RoomOrdered> rooms;

public:
    Order();
    Order(string username, string id, string tourId, string vehicleId, string accommodationId, string number_of_people, vector<RoomOrdered> rooms);
    string getUsername();
    string getId();
    string getTourId();
    string getVehicleId();
    string getAccommodationId();
    string getNumberOfPeople();
    vector<RoomOrdered> getRooms();
    void setUsername(string username);
    void setId(string id);
    void setTourId(string tourId);
    void setVehicleId(string vehicleId);
    void setAccommodationId(string accommodationId);
    void setNumberOfPeople(string number_of_people);
    void setRooms(vector<RoomOrdered> rooms);
    Order &operator=(const Order &other);
};
#endif