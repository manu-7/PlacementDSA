// check if string are rotation of each other or not

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool areRotations(string s1, string s2) {
        
        if (s1.length() != s2.length()) return false;

        
        string temp = s2 + s2;

        
        return temp.find(s1) != string::npos;
    }
};

int main() {
    Solution solution;
    string s1 = "abcde";
    string s2 = "deabc";

    if (solution.areRotations(s1, s2)) {
        cout << "Yes, the strings are rotations of each other." << endl;
    } else {
        cout << "No, the strings are not rotations of each other." << endl;
    }

    return 0;
}
