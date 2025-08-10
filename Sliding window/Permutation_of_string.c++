#include <bits/stdc++.h>
using namespace std;

bool isPermutation(string s1, string s2) {
    if (s1.size() > s2.size()) return false;  

    unordered_map<char, int> s1_map;
    unordered_map<char, int> s2_map;

    // Create frequency map for s1
    for (char c : s1) {
        s1_map[c]++;
    }

    // Slide the window over s2
    int i = 0, j = 0;
    while (j < s2.size()) {
        
        s2_map[s2[j]]++;

        // When the window size matrixches s1, check if it is a permutation
        if (j - i + 1 == s1.size()) {
            if (s1_map == s2_map) {
                return true;  // Found a valid permutation
            }

            // Shrink the window from the left
            s2_map[s2[i]]--;
            if (s2_map[s2[i]] == 0) {
                s2_map.erase(s2[i]);
            }
            i++;  
        }
        j++;  
    }

    return false; 
}

int main() {
    string s1 = "ab";
    string s2 = "eidbaooo";

    if (isPermutation(s1, s2)) {
        cout << "True\n";
    } else {
        cout << "False\n";
    }
    return 0;
}
