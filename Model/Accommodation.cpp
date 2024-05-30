#include "Accommodation.h"
Accommodation::Accommodation() {}
Accommodation::Accommodation(string id, string name, string address, vector<Room> rooms) : id(id), name(name), address(address), rooms(rooms) {}
string Accommodation::getId()
{
    return id;
}
string Accommodation::getName()
{
    return name;
}
string Accommodation::getAddress()
{
    return address;
}
vector<Room> Accommodation::getRooms()
{
    return rooms;
}
void Accommodation::setId(string id)
{
    this->id = id;
}
void Accommodation::setName(string name)
{
    this->name = name;
}
void Accommodation::setAddress(string address)
{
    this->address = address;
}
void Accommodation::setRooms(vector<Room> rooms)
{
    this->rooms = rooms;
}