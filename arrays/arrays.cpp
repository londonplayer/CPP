#include <iostream>
using namespace std;

// arrays are variables capable of storing a lot of information;
// arrays are called with square brakets "[]";
// you can determin the amount of elements inside of an array by specifying the quantity in the parameter "[]";

int main()
{
    int luckyNums[20] = {4, 8, 13, 34};

    luckyNums[0] = 312;

    cout << luckyNums[0];

    return 0;
}