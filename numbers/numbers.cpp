#include <iostream>
#include <cmath> // imports math functions such as: square root, power...
using namespace std;

// operations are pretty much the same as js or any other language;
// "+" addtion | "-" subtraction | "/" division | "*" multiplication | "%" rest of division;
// using "++" after a variable increments its value by 1. is also works for subtraction;
// operating two of numbers of the same type will display only a number in that specific type;
// example: 10 + 10 = 20 (int) | 10 + 10.3 = 20.3 (double) | 10 / 3 = 3 (int) | 10 / 3.0 = 3.1 (double);

// "pow" followed by two parameters/arguments will calculate the first number to the power of the second;
// "sqrt" will give the square root of the presented number;
// "round" will return the reounded number specified;
// "ceil" will round the number up;
// "fmax" will tell which parameter is bigger;

int main()
{
    cout << pow(3, 6);
    cout << sqrt(36);
    cout << round(5.67);
    cout << ceil(5.89);
    cout << fmax(32, 58);

    return 0;
}