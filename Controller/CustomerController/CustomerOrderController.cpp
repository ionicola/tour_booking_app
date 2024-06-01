#include "CustomerOrderController.h"

vector<Order> CustomerListOrders()
{
    return selectCustomerListOrder(GlobalUser.getUsername());
}

Tour GetTourById(string id)
{
    return selectTourById(id);
}