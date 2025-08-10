//Check If a Word Occurs As a Prefix,Postfix,Middle of Any Word in a Sentence

#include <bits/stdc++.h>
using namespace std;

int isSubstringOfWord(string sentence, string searchWord) 
{
    string s;
    int ans = 0;
    stringstream ss(sentence);
    while (ss >> s) 
    {
        ans++;
        // Check for prefix
        if (s.find(searchWord) == 0) return ans;

        // Check for postfix
        if (s.rfind(searchWord) == s.length() - searchWord.length()) return ans;

        // Check for substring anywhere
        if (s.find(searchWord) != string::npos) return ans;
    }
    return -1;
}

int main() {
    string sentence = "hello world people";
    string searchWord = "lo";
    
    int result = isSubstringOfWord(sentence, searchWord);
    
    if (result != -1) {
        cout << "The word is found at position: " << result << endl;
    } else {
        cout << "The word was not found in any word in the sentence." << endl;
    }
    return 0;
}
