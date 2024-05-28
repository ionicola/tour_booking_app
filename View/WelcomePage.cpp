#include "WelcomePage.h"
void WelcomePage()
{
    int number;
    while (true)
    {
        system("cls");
        cout << "Welcome to Tour Booking System" << endl;
        cout << "1. Login" << endl;
        cout << "2. Register" << endl;
        cout << "3. Tours" << endl;
        cout << "4. News" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        if (!(cin >> number))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        else if (number < 0 || number > 4)
        {
            continue;
        }
        else
        {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            switch (number)
            {
            case 1:
                system("cls");
                LoginPage();
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
                // NewsPage();
                break;
            case 0:
                exit(0);
                return;
            }
        }
        system("cls");
    }
}

void LoginPage()
{
    string username;
    string password;
    cout << "Login" << endl;
    cout << "Username: ";
    getline(cin, username);
    cout << "Password: ";
    getline(cin, password);
    LoginNavigator(username, password);
}