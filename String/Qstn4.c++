
//remove all vowels from string

#include <bits/stdc++.h>
using namespace std;

string removeVowels(string str) {
    string result;
    for (char ch : str) {
       
        if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
              ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) {
            result += ch;  // Append non-vowel characters to the result
        }
    }
    return result;  
}

int main() {
    string str;
    cout << "Enter the String: " << endl;
    getline(cin, str);  

    string modifiedString = removeVowels(str);  // Remove vowels from the input string
    cout << "The string after removing vowels from it is: " << modifiedString << endl;
    
    return 0;  
}
