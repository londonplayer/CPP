#include <iostream>
#include <cmath>

using namespace std;

// return is used to finish a function;

int cube()
{
    int number;
    cout << "choose a number: " << endl;
    cin >> number;
    int result = pow(number, 3);
    cout << result << endl;
    return result;
}

int main()
{
    cube();
    return 0;
}