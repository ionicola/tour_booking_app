#include "CustomerEditProfileController.h"

void CustomerChangePasswordController()
{
    updatePasswordUser(GlobalUser.getUsername(), GlobalUser.getPassword());
}

void CustomerChangeFullnameController()
{
    updateFullnameUser(GlobalUser.getUsername(), GlobalUser.getFullname());
}

void CustomerChangeAddressController()
{
    updateAddressUser(GlobalUser.getUsername(), GlobalUser.getAddress());
}

void CustomerChangePhoneNumberController()
{
    updatePhoneNumberUser(GlobalUser.getUsername(), GlobalUser.getPhonenumber());
}

void CustomerChangeEmailController()
{
    updateEmailUser(GlobalUser.getUsername(), GlobalUser.getEmail());
}