//
//  Rachel Roegiers
//  CS 172-1
//  HW03
//  10.5: Check Palindromes
//

#include <iostream>
#include <string>
#include "Palindrome.h"
using namespace std;

bool isPalindrome(const string &s); // global boolian function that passes in user input

int main() // test functions
{
    string s;
    cout << "Enter a string s: " << endl;
    getline(cin,s); //getting the user imput
    
    bool Palindrome = isPalindrome(s); // uses Palindrome function
    
    if (Palindrome)
        cout << s << " is a palindrome. "<< endl;
    else
        cout << s << " is not a palindrome." << endl;
    
    return 0;
}