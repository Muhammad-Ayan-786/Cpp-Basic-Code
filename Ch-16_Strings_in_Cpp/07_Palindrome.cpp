#include<iostream>
using namespace std;

// Function to check if a string is a palindrome
bool palindrome_check(string str) {
    bool isPalindrome = false;

    int left = 0;
    int right = str.length() - 1; 

    while (left < right)
    {
        if (str[left] == str[right])
        {
            isPalindrome = true;
            left++, right--;
        }
        else {
            isPalindrome = false;
            break;
        }
    }

    return isPalindrome;
}

int main() {
    string str = "madam";

    bool palindrome = palindrome_check(str);

    if (palindrome == 1)
        cout << "String is Valid Palindrome" << endl;
    else
        cout << "String is not Valid Palindrome" << endl;

    return 0;
}