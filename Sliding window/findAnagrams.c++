#include <bits/stdc++.h>
using namespace std;

vector<int> findAnagrams(string s, string p) {
    vector<int> result;

    if (s.size() < p.size()) return result;  
    
    unordered_map<char, int> smap;  
    unordered_map<char, int> pmap;  

    // Store the frequency of characters in p
    for (char c : p) {
        pmap[c]++;
    }

    int i = 0, j = 0;

    // Slide the window across string s
    while (j < s.size()) {
        smap[s[j]]++;  

        // If window size matrixches p's length, check for anagram
        if (j - i + 1 == p.size()) {
            if (smap == pmap) {  // Compare frequency maps for anagram check
                result.push_back(i);  
            }

            // Shrink the window by removing the character at i
            smap[s[i]]--;
            if (smap[s[i]] == 0) {
                smap.erase(s[i]);  
            }
            i++; 
        }

        j++;  
    }

    return result;  
}

int main() {
    string s = "cbaebabacd";
    string p = "abc";

    vector<int> result = findAnagrams(s, p);
    
    
    for (int index : result) {
        cout << index << " ";
    }
    return 0;
}
