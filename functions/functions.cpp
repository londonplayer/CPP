#include <iostream>
using namespace std;

// you can declare a function and afterwards atribute values to it. see below:
// "void" DOES NOT return any information;

void sayHi(string name, int age); // function delcared;

int main()
{
    sayHi("Vitor", 21);
    sayHi("Pedro", 17);
    sayHi("Carlos", 28);

    return 0;
}

void sayHi(string name, int age) // function specified;
{
    cout << "Hello, " << name;
    cout << "! You are " << age << " years old." << endl;
}