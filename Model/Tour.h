#ifndef TOUR
#define TOUR
#include "../Ultilities/Library.h"
class Tour
{
private:
    string id;
    string departure;
    string destination;
    string start;
    string end;
    string available_slot;

public:
    Tour();
    Tour(string id, string departure, string destination, string start, string end, string available_slot);
    string getId();
    string getDeparture();
    string getDestination();
    string getStart();
    string getEnd();
    string getAvailableSlot();
    void setId(string id);
    void setDeparture(string departure);
    void setDestination(string destination);
    void setStart(string start);
    void setEnd(string end);
    void setAvailableSlot(string available_slot);
    Tour &operator=(const Tour &other);
};

#endif