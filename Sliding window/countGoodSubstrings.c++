//Substrings of Size Three with Distinct Characters

//A string is good if there are no repeated characters.
//Given a string s​​​​​, return the number of good substrings of length three in s​​​​​​.
//Note that if there are multiple occurrences of the same substring, every occurrence should be counted.

#include<bits/stdc++.h>
using namespace std;

int  CountGoodString(string str){

    int i=0;
    int j=0;
    int count = 0;

    unordered_map<char,int>mpp;
    while(j<str.length()){
        mpp[str[j]]++;   //Add Current Character to the Map

        if(j-i+1<3){     //check the size
            j++;
            continue;
        }else if(j-i+1 == 3 && mpp.size()==3){   //Check for a "Good" Substring
            count++;
        }
        mpp[str[i]]--;                   //Shrink the Window
        if(mpp[str[i]]==0){
            mpp.erase(str[i]);
        }
        i++;
        j++;
    }
    return count;
}


int main() {
    string str = "xyzjfhjhzaz";
    int count = CountGoodString(str);
    cout << "There are " << count << " good substrings of size 3." << endl;
    return 0;
}