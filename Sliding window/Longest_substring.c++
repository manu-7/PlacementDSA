#include <bits/stdc++.h>
using namespace std;

int LongestSubstring(string str) {
    int left = 0;
    int maxlen = 0;
    unordered_set<char> charset;

    for (int right = 0; right < str.length(); right++) {
        // Shrink the window if a duplicate is found
        while (charset.find(str[right]) != charset.end()) {
            charset.erase(str[left]); 
            left++;
        }
        // Expand the window
        charset.insert(str[right]); 
        maxlen = max(maxlen, right - left + 1);
    }
    return maxlen; 
}

int main() {
    string str = "aabacdefaa";
    cout << "Length of the substring is: " << LongestSubstring(str) << endl;
    return 0;
}
