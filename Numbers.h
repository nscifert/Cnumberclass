#ifndef NUMBERS_H
#define NUMBERS_H
#include <iostream>
#include <string>
using namespace std;

class Numbers
{
private:
    int number;

public:
// Static arrays
const static string lessThan20[];
const static string tens[];
const static string hundred[];
const static string thousand[];

Numbers(int n)      // Constructor
{
    number = n;
}

void print();       //Prints words from numbers


};



#endif // NUMBERS_H
