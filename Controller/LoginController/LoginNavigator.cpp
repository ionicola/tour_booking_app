#include "LoginNavigator.h"

void LoginNavigator(string username, string password)
{
    vector<User> users = getAllUserData();
    for (auto &user : users)
    {
        if (user.getUsername() == username && user.getPassword() == password)
        {
            GlobalUser = user;
            if (user.getRole() == "customer")
            {
                CustomerHomePage();
                return;
            }
            else if (user.getRole() == "admin")
            {
                // AdminHomePage();
                cout << "Admin" << endl;
                return;
            }
            break;
        }
    }
    cout << "Invalid username or password" << endl;
    return;
}