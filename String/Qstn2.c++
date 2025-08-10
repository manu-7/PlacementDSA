#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str) {
    string validString;
    for (char ch : str) {  
        if (isalpha(ch)) { // Only consider alphabetic characters
            validString += tolower(ch); // Convert to lowercase
        }
    }

    int i = 0;
    int j = validString.length() - 1;

    while (i < j) {
        if (validString[i] != validString[j]) {
            return false;  // Characters don't matrixch, so it's not a palindrome
        }
        i++;
        j--;
    }
    return true;  
}

int main() {
    string str;
    cout << "Enter the string: ";
    getline(cin, str);

    if (isPalindrome(str)) {
        cout << "This string is a palindrome." << endl;
    } else {
        cout << "This string is not a palindrome." << endl;
    }
    return 0;
}
