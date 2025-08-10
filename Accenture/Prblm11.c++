// Problem Statement – Binary Sequence to Letter Mapping
// You are given a binary string S consisting of only '0' and '1'.
// The string represents sequences of consecutive '1's separated by '0's.

// Your task is to:
// Count the length of each sequence of consecutive '1's.
// Map each length to an uppercase English letter, where:
// 1 → A  2 → B  3 → C
// Concatenate these letters in the order the sequences appear and output the resulting string.

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "10111011";
    int count = 0;
    string ans = "";

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '1') { 
            count++;
        } else {
            if (count > 0) {
                ans += char('A' + count - 1);
                count = 0; 
            }
        }
    }
    // Append last group if string ends with '1's
    if (count > 0) {
        ans += char('A' + count - 1);
    }

    cout << ans;
    return 0;
}