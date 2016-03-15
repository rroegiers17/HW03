
#ifndef Palindrome_h
#define Palindrome_h
#include <string>

bool isPalindrome(const std::string& s) // global boolian function that passes in user input
{
    bool Palindrome = true;
    for (int i = 0; i < s.length(); i++){
        if(toupper(s[i]) != toupper(s[s.length()-1-i])) {
            Palindrome = false;
        }
        else
            Palindrome;
    }
    return Palindrome;
}

#endif /* Palindrome_h */
