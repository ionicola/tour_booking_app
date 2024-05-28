#ifndef USER
#define USER
#include "../Ultilities/Library.h"
class User
{
private:
    string username;
    string password;
    string fullname;
    string address;
    string email;
    string phonenumber;
    string role;

public:
    User();
    User(string username, string password, string fullname, string address, string email, string phonenumber, string role);
    string getUsername();
    string getPassword();
    string getFullname();
    string getAddress();
    string getEmail();
    string getPhonenumber();
    string getRole();
    void setUsername(string username);
    void setPassword(string password);
    void setFullname(string fullname);
    void setAddress(string address);
    void setEmail(string email);
    void setPhonenumber(string phonenumber);
    void setRole(string role);
    User &operator=(const User &other);
};

#endif