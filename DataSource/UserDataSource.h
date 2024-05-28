#ifndef USER_DATA_SOURCE
#define USER_DATA_SOURCE
#include "../Model/User.h"
extern ifstream USER_JSON;
vector<User> getAllUserData();
void updatePasswordUser(string username, string password);
void updateFullnameUser(string username, string fullname);
void updateAddressUser(string username, string address);
void updatePhoneNumberUser(string username, string phoneNumber);
void updateEmailUser(string username, string email);
#endif