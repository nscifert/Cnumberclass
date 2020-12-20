#include "Numbers.h"    //Needed for the Number class.
#include <string>       //Needed for the String class.
#include <cstdlib>      //Need for the exit function

Numbers::Numbers(int n)      // Constructor
{
    number = n;
}

// constant string array of numbers less than 20.
const string Numbers::lessThan20[20] =
    { "zero", "one", "two", "three", "four", "five", "six",
      "seven", "eight", "nine", "ten", "eleven", "twelve",
      "thirteen", "fourteen", "fifteen", "sixteen", "eighteen",
      "nineteen"
    };
// constant string array of numbers in tens place.
const string Numbers::tens[10] =
    { "zero", "ten", "twenty", "thirty", "forty",
      "fifty", "sixty", "seventy", "eighty", "ninety",
    };

const string Numbers::hundred[] = "hundred";    //hundreds place
const string Numbers::thousand[] = "thousand";  //thousands place

void Numbers::print()
{
int remainder = number;

    if (remainder >= 1000)      //Checks thousands
    {
        int n_thousand = remainder /1000;
        remainder = remainder % 1000;
        if (n_thousand > 0)
        {

            cout << " " << lessThan20[n_thousand];
            cout << " thousand ";
            if (remainder == 0)
                return;
        }
    }

    if (remainder >= 100)   //Checks hundreds
    {
        int n_hundred = remainder /100;
        remainder = remainder % 100;
        if (n_hundred > 0)
        {
            cout << " " << lessThan20[n_hundred];
            cout << " hundred ";
            if (remainder == 0)
                return;
        }
    }

    if (remainder >= 20)    // checks tens
    {
        int n_ten = remainder /10;
        remainder = remainder % 10;

        if(n_ten >= 0)
        cout << " " << tens[n_ten];
        if (remainder == 0)
            return;
    }

    cout << " " << lessThan20[remainder]; //checks less than 20

}
