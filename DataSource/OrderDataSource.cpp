#include "OrderDataSource.h"
vector<Order> selectCustomerListOrder(string username)
{
    vector<Order> orders;
    json j;
    ifstream ORDER_JSON("..\\Order.json");
    ORDER_JSON >> j;
    ORDER_JSON.close();
    for (const auto &item : j)
    {
        if (item["username"] == username)
        {
            Order order;
            order.setId(item["id"]);
            order.setUsername(username);
            order.setTourId(item["tourId"]);
            order.setVehicleId(item["vehicleId"]);
            order.setAccommodationId(item["accommodationId"]);
            order.setNumberOfPeople(item["number_of_people"]);
            vector<RoomOrdered> rooms;
            for (const auto &room : item["rooms"])
            {
                RoomOrdered r;
                r.id = room["id"];
                r.name = room["name"];
                r.slot = room["slot"];
                r.price = room["price"];
                r.start = room["start"];
                r.end = room["end"];
                rooms.push_back(r);
            }
            order.setRooms(rooms);
            orders.push_back(order);
        }
    }
    ofstream OF_ORDER_JSON("..\\Order.json");
    OF_ORDER_JSON << j.dump(4);
    OF_ORDER_JSON.close();
    return orders;
}