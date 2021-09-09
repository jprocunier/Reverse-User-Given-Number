// Reverse_User-Given_Number.cpp : This file was created to accept an integer from the user and return the reverse of that number (ex. 145 becomes 541)
// 
// ~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-
//
// Program written by Jessi Procunier using Microsoft Visual Studios
//
// ~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-

#include <iostream>
using namespace std;

int main()
{
    int userInput, remainder, reverseNum = 0;

    cout << "Please provide an integer you would like reversed: ";    // Because the userInput variable is an integer, the largest value that can be accepted is 2,147,483,647

    cin >> userInput;   // Assigns user's number to int userInput

    while (userInput != 0) {    // Loop will run assuming user's input was not 0; End of each loop will divide userInput by 10; Loop will continue until userInput = 0
        remainder = userInput % 10;                     // Gets remainder of user's number when divided by 10 (effectively returning the user's digits in reverse order)
        reverseNum = reverseNum * 10 + remainder;       // Slowly applies these digits from remainder to the new reversed number (by multiplying the number by 10 and adding the remainder to the ones position)
        userInput /= 10;                                // Divides user's number by 10 to get the next digit in reverse order when the loop runs again
    }

    cout << "\n" << "Reversed Number = " << reverseNum << "\n";   // Returns the user's number in reverse

    return 0;
}