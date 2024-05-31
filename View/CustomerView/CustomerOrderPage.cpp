#include "CustomerOrderPage.h"
void CustomerOrderPage()
{
    while (true)
    {
        cout << "My Order" << endl;
        int choice;
        cout << "1. Processing order" << endl;
        cout << "2. Completed order" << endl;
        cout << "3. Cancelled order" << endl;
        cout << "0. Back" << endl;
        cout << "Enter your choice: ";
        if (!(cin >> choice))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        else if (choice < 0 || choice > 3)
        {
            continue;
        }
        else
        {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            switch (choice)
            {
            case 1:
                system("cls");
                CustomerProcessingOrderPage();
                break;
            case 2:
                system("cls");
                // CustomerCompletedOrderPage();
                break;
            case 3:
                system("cls");
                // CustomerCancelledOrderPage();
                break;
            case 0:
                return;
            }
        }
        system("cls");
    }
}

void CustomerProcessingOrderPage()
{
    while (true)
    {
        system("cls");
        cout << "My Processing Order" << endl;
        cout << "1. View Order Processing" << endl;
        cout << "2. Cancel Order Processing" << endl;
        cout << "0. Back" << endl;
        int choice;
        cout << "Enter your choice: ";
        if (!(cin >> choice))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        else if (choice < 0 || choice > 3)
        {
            continue;
        }
        else
        {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            switch (choice)
            {
            case 1:
                ViewOrderProcessingPage();
                system("cls");
                break;
            case 2:
                system("cls");
            case 0:
                return;
            }
        }
        system("cls");
    }
}

void ViewOrderProcessingPage()
{
    while (true)
    {
        vector<Order> orders = CustomerListOrders();
        system("cls");
        cout << "View Order Processing" << endl;
        cout << "0. Back" << endl;
        int i = 1;
        for (auto &order : orders)
        {
            cout << i << ". " << order.getId() << endl;
            i++;
        }
        int choice;
        cout << "Enter your choice: ";
        if (!(cin >> choice))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        else if (choice < 0 || choice > orders.size())
        {
            continue;
        }
        else
        {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            switch (choice)
            {
            case 0:
                return;
            }
        }
        system("cls");
    }
}