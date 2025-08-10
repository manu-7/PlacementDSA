//Reverse a String

#include <bits/stdc++.h>
using namespace std;

string Reversestring(string str) {
    int i = 0;
    int j = str.length() - 1;

    while (i < j) {
        swap(str[i], str[j]); 
        i++;
        j--;
    }
    return str; 
}

int main() {
    string str;
    cout << "Enter the string:" << endl;
    getline(cin, str);
    
    string modifiedstr = Reversestring(str); 
    cout << "The reversed string is: " << modifiedstr << endl; 
    return 0;
}
