#ifndef CUSTOMER_PROFILE_PAGE
#define CUSTOMER_PROFILE_PAGE
#include "CustomerHomePage.h"
#include "../../Controller/CustomerController/CustomerEditProfileController.h"
#include "../../Ultilities/Common.h"
extern User GlobalUser;
void CustomerProfilePage();
void CustomerEditProfilePage();
void CustomerChangePassword();
void CustomerChangeFullname();
void CustomerChangeAddress();
void CustomerChangePhoneNumber();
void CustomerChangeEmail();
#endif