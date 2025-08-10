#include <bits/stdc++.h>
using namespace std;

string reverseWord(string s) {
    int n = s.length();
    string ans = "";

    // Step 1: Reverse the entire string
    reverse(s.begin(), s.end());

    for (int i = 0; i < n; i++) {
        string word = "";

        // Step 2: Extract a word (characters until the next space or end of string)
        while (i < n && s[i] != ' ') { // Stop at spaces or end of the string
            word += s[i];
            i++;
        }

        // Step 3: Reverse the extracted word to restore its original order
        reverse(word.begin(), word.end());

        // Step 4: Add the word to the result, with a space as a separator
        if (word.length() > 0) {
            if (!ans.empty()) ans += ' '; 
            ans += word;
        }
    }

    return ans;
}

int main() {
    string s = "hello world";
    string result = reverseWord(s);

    cout << "Reversed Words: " << result << endl; 

    return 0;
}
