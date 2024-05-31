#include "CustomerProfilePage.h"
void CustomerProfilePage()
{
    while (true)
    {
        system("cls");
        cout << "My Profile" << endl;
        cout << "Username\t: " << GlobalUser.getUsername() << endl;
        cout << "Password\t: ********" << endl;
        cout << "Name\t\t: " << GlobalUser.getFullname() << endl;
        cout << "Address\t\t: " << GlobalUser.getAddress() << endl;
        cout << "Phone\t\t: " << GlobalUser.getPhonenumber() << endl;
        cout << "Email\t\t: " << GlobalUser.getEmail() << endl;
        int choice;
        cout << "1. Change information" << endl;
        cout << "0. Back" << endl;
        cout << "Enter your choice: ";
        if (!(cin >> choice))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        else if (choice < 0 || choice > 1)
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
                CustomerEditProfilePage();
                break;
            case 0:
                return;
            }
        }
        system("cls");
    }
}

void CustomerEditProfilePage()
{
    while (true)
    {

        cout << "My Profile" << endl;
        cout << "Username\t: " << GlobalUser.getUsername() << endl;
        cout << "Password\t: ********" << endl;
        cout << "Name\t\t: " << GlobalUser.getFullname() << endl;
        cout << "Address\t\t: " << GlobalUser.getAddress() << endl;
        cout << "Phone\t\t: " << GlobalUser.getPhonenumber() << endl;
        cout << "Email\t\t: " << GlobalUser.getEmail() << endl;
        cout << "1. Change password" << endl;
        cout << "2. Change fullname" << endl;
        cout << "3. Change address" << endl;
        cout << "4. Change phone number" << endl;
        cout << "5. Change email" << endl;
        cout << "0. Back" << endl;
        int choice;
        cout << "Enter your choice: ";
        if (!(cin >> choice))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        else if (choice < 0 || choice > 5)
        {
            continue;
        }
        else
        {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            switch (choice)
            {
            case 1:
                CustomerChangePassword();
                break;
            case 2:
                CustomerChangeFullname();
                break;
            case 3:
                CustomerChangeAddress();
                break;
            case 4:
                CustomerChangePhoneNumber();
                break;
            case 5:
                CustomerChangeEmail();
                break;
            case 0:
                return;
            }
        }
        system("cls");
    }
}

void CustomerChangePassword()
{
    cout << endl;
    string oldPassword, newPassword;
    cout << "Enter your old password: ";
    getline(cin, oldPassword);
    if (GlobalUser.getPassword() == oldPassword)
    {
        cout << "Enter your new password: ";
        getline(cin, newPassword);
        if (!CheckLegitPassword(newPassword))
        {
            cout << "Failed. Your new password is wrong format." << endl;
            cout << "Our format: have at least 8 characters including at least 1 uppercase letter,\n1 lowercase letter, 1 number and 1 special character." << endl;
            system("pause");
            return;
        }
        if (GlobalUser.getPassword() != newPassword)
        {
            GlobalUser.setPassword(newPassword);
            CustomerChangePasswordController();
            cout << "Your password has been changed successfully." << endl;
            system("pause");
            return;
        }
        else
        {
            cout << "Failed. Your new password is the same as your old password." << endl;
            system("pause");
            return;
        }
    }
    else
    {
        cout << "Failed. Your old password is incorrect." << endl;
        system("pause");
        return;
    }
}

void CustomerChangeFullname()
{
    cout << endl;
    string newName;
    cout << "Enter your new fullname: ";
    getline(cin, newName);
    if (newName.length() <= 3)
    {
        cout << "Failed. Your new fullname is too short." << endl;
        system("pause");
        return;
    }
    if (GlobalUser.getFullname() != newName)
    {
        GlobalUser.setFullname(newName);
        CustomerChangeFullnameController();
        cout << "Your fullname has been changed successfully." << endl;
        system("pause");
        return;
    }
    else
    {
        cout << "Failed. Your new fullname is the same as your old fullname." << endl;
        system("pause");
        return;
    }
}

void CustomerChangeAddress()
{
    cout << endl;
    string newAddress;
    cout << "Enter your new address: ";
    getline(cin, newAddress);
    if (newAddress.length() <= 7)
    {
        cout << "Failed. Your new address is too short." << endl;
        system("pause");
        return;
    }
    if (GlobalUser.getAddress() != newAddress)
    {
        GlobalUser.setAddress(newAddress);
        CustomerChangeAddressController();
        cout << "Your address has been changed successfully." << endl;
        system("pause");
        return;
    }
    else
    {
        cout << "Failed. Your new address is the same as your old address." << endl;
        system("pause");
        return;
    }
}

void CustomerChangePhoneNumber()
{
    cout << endl;
    string newPhoneNumber;
    cout << "Enter your new phone number: ";
    getline(cin, newPhoneNumber);
    if (!CheckLegitPhoneNumber(newPhoneNumber))
    {
        cout << "Failed. Your new phone number is wrong format." << endl;
        system("pause");
        return;
    }
    if (GlobalUser.getPhonenumber() != newPhoneNumber)
    {
        GlobalUser.setPhonenumber(newPhoneNumber);
        CustomerChangePhoneNumberController();
        cout << "Your phone number has been changed successfully." << endl;
        system("pause");
        return;
    }
    else
    {
        cout << "Failed. Your new phone number is the same as your old phone number." << endl;
        system("pause");
        return;
    }
}

void CustomerChangeEmail()
{
    cout << endl;
    string newEmail;
    cout << "Enter your new email: ";
    getline(cin, newEmail);
    if (!CheckLegitEmail(newEmail))
    {
        cout << "Failed. Your new email is wrong format." << endl;
        system("pause");
        return;
    }
    if (GlobalUser.getEmail() != newEmail)
    {
        GlobalUser.setEmail(newEmail);
        CustomerChangeEmailController();
        cout << "Your email has been changed successfully." << endl;
        system("pause");
        return;
    }
    else
    {
        cout << "Failed. Your new email is the same as your old email." << endl;
        system("pause");
        return;
    }
}