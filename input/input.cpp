#include <iostream>
#include <cmath>

using namespace std;

// "cin >>" is used to input information;
// "getline" is used to print a whole line of text you input in the terminal. two parameters are used: (cin (input), variable (storege));

int main()
{
    string name;
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Hello, " << name << endl;

    return 0;
}