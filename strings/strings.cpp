#include <iostream>
using namespace std;

// "endl" prints a new line just like "\n";
// ".length" can be used to count the amount of charaters in a variable;
// ".find" can be used to locate a character in a variable;
// "phrase[0] = 'B';"" assign "B" for the first character;
// "phrase.find('o', 0);" search for the character "o" from the index position "0" and gives the position(4);

int main()
{
    string phrase = "hello"; // strings are counted from 0 > h == 1, e == 2 and so on;
                             // first parameter is the starting index - meaning that the count will part from the index character "2";
                             // the second parameter will choose how many index charaters it will display parting from the first parameter;
    string phrasesub;
    phrasesub = phrase.substr(2, 2);
    // first parameter is the starting index - meaning that the count will part from the index character "2";
    // the second parameter will choose how many index charaters it will display parting from the first parameter;

    cout << phrasesub;
    return 0;
}
