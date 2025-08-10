#include <bits/stdc++.h>
using namespace std;

string Reverse(string word, char ch) {
    int index = word.find(ch);  // Find the index of the given character

    if (index == string::npos) {  // If the character is not found, return the word
        return word;
    }

    int i = 0;
    int j = index;
    while (i < j) {
        swap(word[i], word[j]);
        i++;
        j--;
    }
    return word;
}

int main() {
    string word = "hellosirhowareyou";
    char ch = 'w';  

    string result = Reverse(word, ch);

    cout << "Original word: " << word << endl;
    cout << "Reversed prefix: " << result << endl;

    return 0;
}
