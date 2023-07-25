#include <iostream>
using namespace std;

// "if" statements prints if the stored inforamtion is true;

// "&&" returns true when both parameters are true;
// "||" returns true even if one parameter is false;
// "!" nagates a parameter/condition;

int main()
{
    bool isMale = true;
    bool isTall = false;

    if (isMale && isTall)
    {
        cout << "You are a tall male. ";
    }
    else if (isMale && !isTall)
    {
        cout << "You are a short male. ";
    }
    else if (!isMale && isTall)
    {
        cout << "You are a tall female. ";
    }
    else
    {
        cout << "You are not male nor tall. ";
    }

    return 0;
}