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
};
class Accommodation
{
private:
    string id;
    string name;
    string address;
    vector<Room> rooms;
};

#endif