#include <bits/stdc++.h>
using namespace std;

bool isVowel(char ch) {
    ch = tolower(ch); 
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

string reverseVowels(string s) {
    int left = 0, right = s.size() - 1;

    while (left < right) {

        while (left < right && !isVowel(s[left])) {
            left++;
        }

        while (left < right && !isVowel(s[right])) {
            right--;
        }

        swap(s[left], s[right]);
        left++;
        right--;
    }

    return s;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    string result = reverseVowels(input);
    cout << "String after reversing vowels: " << result << endl;

    return 0;
}
