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
        cout << "My Processing Order" << endl;
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
                system("cls");
                break;
            case 2:
                system("cls");
            case 3:
                system("cls");
            case 0:
                return;
            }
        }
        system("cls");
    }
}