#include "Vehicle.h"

Vehicle::Vehicle() {}
Vehicle::Vehicle(string id, string type, string departure, string destination, string station_departure, string station_destination, string start, string end, string time_arrival, string time_departure, string available_slot) : id(id), type(type), departure(departure), destination(destination), station_departure(station_departure), station_destination(station_destination), start(start), end(end), time_arrival(time_arrival), time_departure(time_departure), available_slot(available_slot) {}
string Vehicle::getId()
{
    return id;
}
string Vehicle::getType()
{
    return type;
}
string Vehicle::getDeparture()
{
    return departure;
}
string Vehicle::getDestination()
{
    return destination;
}
string Vehicle::getStationDeparture()
{
    return station_departure;
}
string Vehicle::getStationDestination()
{
    return station_destination;
}
string Vehicle::getStart()
{
    return start;
}
string Vehicle::getEnd()
{
    return end;
}
string Vehicle::getTimeArrival()
{
    return time_arrival;
}
string Vehicle::getTimeDeparture()
{
    return time_departure;
}
string Vehicle::getAvailableSlot()
{
    return available_slot;
}
void Vehicle::setId(string id)
{
    this->id = id;
}
void Vehicle::setType(string type)
{
    this->type = type;
}
void Vehicle::setDeparture(string departure)
{
    this->departure = departure;
}
void Vehicle::setDestination(string destination)
{
    this->destination = destination;
}
void Vehicle::setStationDeparture(string station_departure)
{
    this->station_departure = station_departure;
}
void Vehicle::setStationDestination(string station_destination)
{
    this->station_destination = station_destination;
}
void Vehicle::setStart(string start)
{
    this->start = start;
}
void Vehicle::setEnd(string end)
{
    this->end = end;
}
void Vehicle::setTimeArrival(string time_arrival)
{
    this->time_arrival = time_arrival;
}
void Vehicle::setTimeDeparture(string time_departure)
{
    this->time_departure = time_departure;
}
void Vehicle::setAvailableSlot(string available_slot)
{
    this->available_slot = available_slot;
}
Vehicle &Vehicle::operator=(const Vehicle &other)
{
    this->id = other.id;
    this->type = other.type;
    this->departure = other.departure;
    this->destination = other.destination;
    this->station_departure = other.station_departure;
    this->station_destination = other.station_destination;
    this->start = other.start;
    this->end = other.end;
    this->time_arrival = other.time_arrival;
    this->time_departure = other.time_departure;
    this->available_slot = other.available_slot;
    return *this;
}