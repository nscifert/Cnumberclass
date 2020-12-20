//This program translates whole dollar amounts into words for the for the purpose of writing checks.
//Entering a negative number terminates the program.
#include <iostream>
#include <string>
#include "Numbers.h"

using namespace std;

int main()
{
    int number;

    cout << "This program translates whole dollar amounts ";
    cout << "into words for the for the purpose of writing checks.\n";
    cout << "Entering a negative number terminates the program.\n";
    cout << "Enter an amount for be translated into words:(0-9999)\n";

    cin >> number;              //gets number

    while (number >= 0)
    {
        Numbers n(number);      //Number object
        n.print();              //print function call

        cout << "\n Enter another number to translate: \n";
        cin >> number;         //gets another number
    }
    return 0;
}

