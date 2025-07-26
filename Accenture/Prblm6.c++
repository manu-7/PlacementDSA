/* Given an array,String arr = {"gender", "blender", " blunder", "under"}
Input string is " thunder" . From the array return the word that rhymes the
most with the given
word. And if two words rhymes the most then return the word with less
character count.
(example in blunder and under, the output will be "under") */

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string getMostRhymingWord(vector<string>& arr, string input) {
        string result = "";
        int maxMatchLen = 0;

        for (string word : arr) {
            int i = word.size() - 1;
            int j = input.size() - 1;
            int matchCount = 0;

            // Count matching characters from the end
            while (i >= 0 && j >= 0 && word[i] == input[j]) {
                matchCount++;
                i--;
                j--;
            }

            // Choose the word with longer rhyme or smaller size if tie
            if (matchCount > maxMatchLen || 
               (matchCount == maxMatchLen && word.size() < result.size())) {
                result = word;
                maxMatchLen = matchCount;
            }
        }

        return result;
    }
};

int main() {
    Solution sol;
    vector<string> arr = {"gender", "blender", "blunder", "under"};
    string input = "thunder";

    string answer = sol.getMostRhymingWord(arr, input);
    cout << "Most rhyming word: " << answer << endl;

    return 0;
}
