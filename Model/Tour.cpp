#include "Tour.h"
Tour::Tour() {}
Tour::Tour(string id, string departure, string destination, string start, string end, string available_slot) : id(id), departure(departure), destination(destination), start(start), end(end), available_slot(available_slot) {}
string Tour::getId()
{
    return id;
}
string Tour::getDeparture()
{
    return departure;
}
string Tour::getDestination()
{
    return destination;
}
string Tour::getStart()
{
    return start;
}
string Tour::getEnd()
{
    return end;
}
string Tour::getAvailableSlot()
{
    return available_slot;
}
void Tour::setId(string id)
{
    this->id = id;
}
void Tour::setDeparture(string departure)
{
    this->departure = departure;
}
void Tour::setDestination(string destination)
{
    this->destination = destination;
}
void Tour::setStart(string start)
{
    this->start = start;
}
void Tour::setEnd(string end)
{
    this->end = end;
}
void Tour::setAvailableSlot(string available_slot)
{
    this->available_slot = available_slot;
}
Tour &Tour::operator=(const Tour &other)
{
    this->id = other.id;
    this->departure = other.departure;
    this->destination = other.destination;
    this->start = other.start;
    this->end = other.end;
    this->available_slot = other.available_slot;
    return *this;
}