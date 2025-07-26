/* You are given an array of size N you have to find the
  the length of longest subsequence.In which the difference
  of every consecutive element is divisible by K */



#include<bits/stdc++.h>
using namespace std;

int longestSubsequence(vector<int> &arr,int k){
    unordered_map<int,int>mapp;
    int maxLen = 0;

    for(int num:arr){
        if(mapp.find(num-k)!=mapp.end()){
            mapp[num] = mapp[num-k]+1;
        }else{
            mapp[num] = 1;
        }
         maxLen = max(maxLen, mapp[num]);
    }
    return maxLen;
}
int main(){
    vector<int>arr = {2,4};
    int k = 2;

    cout << "Length of longest valid subsequence: " << longestSubsequence(arr, k) << endl;
    return 0;
}