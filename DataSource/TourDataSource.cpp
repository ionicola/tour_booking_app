#include "TourDataSource.h"

Tour selectTourById(string id)
{
    json j;
    ifstream TOUR_JSON("..\\Tour.json");
    TOUR_JSON >> j;
    TOUR_JSON.close();
    Tour tour;
    for (const auto &item : j)
    {
        if (item["id"] == id)
        {
            tour.setId(item["id"]);
            tour.setDeparture(item["departure"]);
            tour.setDestination(item["destination"]);
            tour.setStart(item["start"]);
            tour.setEnd(item["end"]);
            tour.setAvailableSlot(item["available_slot"]);
            break;
        }
    }
    ofstream OF_TOUR_JSON("..\\Tour.json");
    OF_TOUR_JSON << j.dump(4);
    OF_TOUR_JSON.close();
    return tour;
}