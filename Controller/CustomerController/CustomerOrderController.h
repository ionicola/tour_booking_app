#ifndef CUSTOMER_ORDER_CONTROLLER
#define CUSTOMER_ORDER_CONTROLLER
#include "../../DataSource/OrderDataSource.h"
#include "../../DataSource/TourDataSource.h"
extern User GlobalUser;
vector<Order> CustomerListOrders();
Tour GetTourById(string id);
#endif