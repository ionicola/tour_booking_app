#include "CustomerOrderController.h"

vector<Order> CustomerListOrders()
{
    return selectCustomerListOrder(GlobalUser.getUsername());
}