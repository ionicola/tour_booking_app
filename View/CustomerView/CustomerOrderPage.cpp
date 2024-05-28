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
            case 3:
                system("cls");
                // CustomerCancelledOrderPage();
            case 0:
                return;
            }
        }
        system("cls");
    }
}