#include "UserDataSource.h"
vector<User> getAllUserData()
{
    vector<User> users;
    json j;
    ifstream USER_JSON("..\\User.json");
    USER_JSON >> j;
    USER_JSON.close();
    for (auto &u : j)
    {
        User user(u["username"], u["password"], u["fullname"], u["address"], u["email"], u["phonenumber"], u["role"]);
        users.push_back(user);
    }
    return users;
}

void updatePasswordUser(string username, string password)
{
    json j;
    ifstream USER_JSON("..\\User.json");
    USER_JSON >> j;
    USER_JSON.close();
    for (auto &u : j)
    {
        if (u["username"] == username)
        {
            u["password"] = password;
            break;
        }
    }
    ofstream OF_USER_JSON("..\\User.json");
    OF_USER_JSON << j.dump(4);
    OF_USER_JSON.close();
}

void updateFullnameUser(string username, string fullname)
{
    json j;
    ifstream USER_JSON("..\\User.json");
    USER_JSON >> j;
    USER_JSON.close();
    for (auto &u : j)
    {
        if (u["username"] == username)
        {
            u["fullname"] = fullname;
            break;
        }
    }
    ofstream OF_USER_JSON("..\\User.json");
    OF_USER_JSON << j.dump(4);
    OF_USER_JSON.close();
}

void updateAddressUser(string username, string address)
{
    json j;
    ifstream USER_JSON("..\\User.json");
    USER_JSON >> j;
    USER_JSON.close();
    for (auto &u : j)
    {
        if (u["username"] == username)
        {
            u["address"] = address;
            break;
        }
    }
    ofstream OF_USER_JSON("..\\User.json");
    OF_USER_JSON << j.dump(4);
    OF_USER_JSON.close();
}

void updatePhoneNumberUser(string username, string phoneNumber)
{
    json j;
    ifstream USER_JSON("..\\User.json");
    USER_JSON >> j;
    USER_JSON.close();
    for (auto &u : j)
    {
        if (u["username"] == username)
        {
            u["phonenumber"] = phoneNumber;
            break;
        }
    }
    ofstream OF_USER_JSON("..\\User.json");
    OF_USER_JSON << j.dump(4);
    OF_USER_JSON.close();
}

void updateEmailUser(string username, string email)
{
    json j;
    ifstream USER_JSON("..\\User.json");
    USER_JSON >> j;
    USER_JSON.close();
    for (auto &u : j)
    {
        if (u["username"] == username)
        {
            u["email"] = email;
            break;
        }
    }
    ofstream OF_USER_JSON("..\\User.json");
    OF_USER_JSON << j.dump(4);
    OF_USER_JSON.close();
}