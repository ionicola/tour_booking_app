#include "CustomerHomePage.h"
void CustomerHomePage()
{
    int choice;
    while (true)
    {
        system("cls");
        cout << "Welcome, " << GlobalUser.getFullname() << endl;
        cout << "1. My Profile" << endl;
        cout << "2. My Orders" << endl;
        cout << "3. Find Tours" << endl;
        cout << "4. Logout" << endl;
        cout << "Enter your choice: ";
        if (!(cin >> choice))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        else if (choice < 0 || choice > 4)
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
                CustomerProfilePage();
                break;
            case 2:
                system("cls");
                // RegisterPage();
                break;
            case 3:
                system("cls");
                // ToursPage();
                break;
            case 4:
                system("cls");
                return;
            }
        }
        system("cls");
    }
}