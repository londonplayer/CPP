#include <iostream>
using namespace std;

int main()
{
    string color, noun, celebrity;

    cout << "Choose a color: ";
    getline(cin, color);

    cout << "Choose a plural noun: ";
    getline(cin, noun);

    cout << "Choose a celebrity: ";
    getline(cin, celebrity);

    cout << "Roses are " << color << endl;
    cout << noun << " are blue" << endl;
    cout << "I love " << celebrity << endl;

    return 0;
}