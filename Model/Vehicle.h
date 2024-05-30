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

public:
    Vehicle();
    Vehicle(string id, string type, string departure, string destination, string station_departure, string station_destination, string start, string end, string time_arrival, string time_departure, string available_slot);
    string getId();
    string getType();
    string getDeparture();
    string getDestination();
    string getStationDeparture();
    string getStationDestination();
    string getStart();
    string getEnd();
    string getTimeArrival();
    string getTimeDeparture();
    string getAvailableSlot();
    void setId(string id);
    void setType(string type);
    void setDeparture(string departure);
    void setDestination(string destination);
    void setStationDeparture(string station_departure);
    void setStationDestination(string station_destination);
    void setStart(string start);
    void setEnd(string end);
    void setTimeArrival(string time_arrival);
    void setTimeDeparture(string time_departure);
    void setAvailableSlot(string available_slot);
    Vehicle &operator=(const Vehicle &other);
};

#endif