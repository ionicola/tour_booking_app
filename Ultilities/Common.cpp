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