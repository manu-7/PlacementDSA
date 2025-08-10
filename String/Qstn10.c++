//Write a program to find weather a string is ANAGRAM or not

#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string  &str1,string &str2){
    if(str1.length()!=str2.length()){
        return false;
    }

    unordered_map<char, int> charcount;

    for (char ch : str1) {
        charcount[ch]++;
    }

    for (char ch : str2) {
        charcount[ch]--;
        if (charcount[ch] > 0) {
            return false;
        }
    }
    return true;
}
int main() {
    string str1, str2;
    cout << "Enter first string: ";
    getline(cin, str1);
    cout << "Enter second string: ";
    getline(cin, str2);

    if (isAnagram(str1, str2)) {
        cout << "The strings are anagrams." << endl;
    } else {
        cout << "The strings are not anagrams." << endl;
    }

    return 0;
}