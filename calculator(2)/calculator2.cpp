#include <iostream>
using namespace std;

int main()
{

    int num1, num2;
    char op;
    int result;

    cout << "Enter the first number: " << endl;
    cin >> num1;
    cout << "Enter the operator: " << endl;
    cin >> op;
    cout << "Enter the second number: " << endl;
    cin >> num2;

    if (op == '+')
    {
        result = num1 + num2;
    }
    else if (op == '-')
    {
        result = num1 - num2;
    }
    else if (op == '*')
    {
        result = num1 * num2;
    }
    else if (op == '/')
    {
        result = num1 / num2;
    }
    else
    {
        cout << "INVALID OPERATOR";
    }

    cout << result;

    return 0;
}