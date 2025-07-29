
// You are on a hiking trail represented by an Array A of length N. where the
// trial initially ascends
// and then descends forming a single peek. Your task is to find and return an
// integer value representing the elevation of the summit.

#include<bits/stdc++.h>
using namespace std;

int peakIndexArray(vector<int> &arr){
    int n = arr.size();

    int left = 1;
    int right = n-2;

    while(left <= right){
        int mid = left+(right-left)/2;

        if(arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1]){
            return mid;
        }else if(arr[mid] < arr[mid+1]){
            left = mid+1;
        }else{
            right = mid-1;
        }
    }
}

int main(){
    vector<int> arr = {1, 3, 5, 7, 6, 4, 2};

    int peakIndex = peakIndexArray(arr);

    cout << "Peak index: " << peakIndex << endl;
    cout << "Peak value: " << arr[peakIndex] << endl;
    return 0;
}