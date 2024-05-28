#include "Common.h"

bool CheckLegitPhoneNumber(string phoneNumber)
{
    regex pattern("^0[3,5,7,8,9][0-9]{8}$");
    if (regex_match(phoneNumber, pattern))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool CheckLegitEmail(string email)
{
    regex pattern(R"([a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,})");
    if (regex_match(email, pattern))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool CheckLegitPassword(string password)
{
    if (password.length() < 8)
    {
        return false;
    }

    bool has_uppercase = false;
    bool has_lowercase = false;
    bool has_digit = false;
    bool has_special_char = false;

    for (char c : password)
    {
        if (isupper(c))
        {
            has_uppercase = true;
        }
        else if (islower(c))
        {
            has_lowercase = true;
        }
        else if (isdigit(c))
        {
            has_digit = true;
        }
        else if (ispunct(c) || c == ' ')
        {
            has_special_char = true;
        }
    }

    return has_uppercase && has_lowercase && has_digit && has_special_char;
}