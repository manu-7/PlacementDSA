/*   You are working on a financial analysing tool which represents daily stock
prices of a
company over time. Each element in an integer array A of size N represents
the closing price
of the stock for that particular day. Your task is to find and return an integer value
representing the total number of days where the stock market price
decreased indicating
negative growth.   */

#include<bits/stdc++.h>
using namespace std;

int totalDescreases(vector<int>& arr){
    int count = 0;
    int n = arr.size();
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            count++;
        }
    }
    return count;
}

int main(){
    vector<int> arr = {100, 98, 102, 101, 97, 97, 99};
    int ans = totalDescreases(arr);
    cout<<"so the total decreased is:"<<ans<<endl;
    return 0;

}