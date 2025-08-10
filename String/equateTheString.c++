//you are given a word in which the letters are only lower case.
//you need to remove one letter from the word such it makes the count of each letter is same.
//eg:yummy
//on removing u we get 2 y and 2 m which makes it true.
//stop all character count is same so return true

#include<bits/stdc++.h>
using namespace std;

bool canEqualizeByRemovingOne(string word){

    unordered_map<char, int> freq;
    for(char c:word){
        freq[c]++;
    }

    unordered_map<int,int>freqcount;
    for(auto it:freq){
        freqcount[it.second]++;
    }

    if (freqcount.size() == 1) {
        return true;
    }
    
   

}

