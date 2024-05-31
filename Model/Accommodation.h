#ifndef ACCOMMODATION
#define ACCOMMODATION
#include "../Ultilities/Library.h"
struct Room
{
    string id;
    string name;
    string available_slot;
    string price;
    string start;
    string end;

    Room() {}
    Room(string id, string name, string available_slot, string price, string start, string end) : id(id), name(name), available_slot(available_slot), price(price), start(start), end(end) {}
};
class Accommodation
{
private:
    string id;
    string name;
    string address;
    vector<Room> rooms;

public:
    Accommodation();
    Accommodation(string id, string name, string address, vector<Room> rooms);
    string getId();
    string getName();
    string getAddress();
    vector<Room> getRooms();
    void setId(string id);
    void setName(string name);
    void setAddress(string address);
    void setRooms(vector<Room> rooms);
};

#endif