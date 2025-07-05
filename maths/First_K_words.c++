// Find First K words of the string

#include<bits/stdc++.h>
using namespace std;

string firstKWords(string str,int K){
    stringstream ss(str);
    string word;
    string result = "";
    int count = 0;

    while(ss >> word  && count<K){
        if(count > 0){
            result += ' ';
        }
        result += word;
        count++;   
    }
    return result;
}

int main() {
    string str = "The quick brown fox jumps over the lazy dog";
    int k = 1;

    string result = firstKWords(str, k);
    cout << "First " << k << " words: " << result << endl;

    return 0;
}