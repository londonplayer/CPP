#include <iostream>

using namespace std;

int main()
{
    int firstNumber;
    int secondNumber;

    cout << "Choose your first number: " << endl;
    cin >> firstNumber;

    cout << "Now, choose your second number: " << endl;
    cin >> secondNumber;

    int result = firstNumber + secondNumber;
    cout << "The result is: " << result << endl;

    return 0;
}