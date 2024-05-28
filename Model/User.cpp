#include "User.h"

// Constructors
User::User() {}
User::User(string username, string password, string fullname, string address, string email, string phonenumber, string role)
{
    this->username = username;
    this->password = password;
    this->fullname = fullname;
    this->address = address;
    this->email = email;
    this->phonenumber = phonenumber;
    this->role = role;
}

string User::getUsername() { return username; }
string User::getPassword() { return password; }
string User::getFullname() { return fullname; }
string User::getAddress() { return address; }
string User::getEmail() { return email; }
string User::getPhonenumber() { return phonenumber; }
string User::getRole() { return role; }

void User::setUsername(string username) { this->username = username; }
void User::setPassword(string password) { this->password = password; }
void User::setFullname(string fullname) { this->fullname = fullname; }
void User::setAddress(string address) { this->address = address; }
void User::setEmail(string email) { this->email = email; }
void User::setPhonenumber(string phonenumber) { this->phonenumber = phonenumber; }
void User::setRole(string role) { this->role = role; }

User &User::operator=(const User &other)
{
    if (this != &other)
    {
        // Copy data from 'other' to 'this'
        this->username = other.username;
        this->password = other.password;
        this->fullname = other.fullname;
        this->address = other.address;
        this->email = other.email;
        this->phonenumber = other.phonenumber;
        this->role = other.role;
    }
    return *this;
}