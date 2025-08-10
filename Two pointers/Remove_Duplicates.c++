#include <bits/stdc++.h>
using namespace std;

int Remove_Duplicates(vector<int>& arr, int n) {
    if (arr.empty()) return 0; 
    int i = 0;
    for (int j = 1; j < n; j++) {
        if (arr[i] != arr[j]) {
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1; 
}

int main() {
    vector<int> arr = {1, 1, 2, 2, 3, 3};
    int n = arr.size(); 
    int newLength = Remove_Duplicates(arr, n);
    for (int i = 0; i < newLength; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
