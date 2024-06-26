#include "Order.h"
Order::Order() {}
Order::Order(string username, string id, string tourId, string vehicleId, string accommodationId, string number_of_people, vector<RoomOrdered> rooms) : username(username), id(id), tourId(tourId), vehicleId(vehicleId), accommodationId(accommodationId), number_of_people(number_of_people), rooms(rooms) {}
string Order::getUsername()
{
    return username;
}
string Order::getId()
{
    return id;
}
string Order::getTourId()
{
    return tourId;
}
string Order::getVehicleId()
{
    return vehicleId;
}
string Order::getAccommodationId()
{
    return accommodationId;
}
string Order::getNumberOfPeople()
{
    return number_of_people;
}
vector<RoomOrdered> Order::getRooms()
{
    return rooms;
}
void Order::setUsername(string username)
{
    this->username = username;
}
void Order::setId(string id)
{
    this->id = id;
}
void Order::setTourId(string tourId)
{
    this->tourId = tourId;
}
void Order::setVehicleId(string vehicleId)
{
    this->vehicleId = vehicleId;
}
void Order::setAccommodationId(string accommodationId)
{
    this->accommodationId = accommodationId;
}
void Order::setNumberOfPeople(string number_of_people)
{
    this->number_of_people = number_of_people;
}
void Order::setRooms(vector<RoomOrdered> rooms)
{
    this->rooms = rooms;
}
Order &Order::operator=(const Order &other)
{
    this->username = other.username;
    this->id = other.id;
    this->tourId = other.tourId;
    this->vehicleId = other.vehicleId;
    this->accommodationId = other.accommodationId;
    this->number_of_people = other.number_of_people;
    this->rooms = other.rooms;
    return *this;
}