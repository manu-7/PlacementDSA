#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> twoSumPairs(vector<int> arr, int target) {
    unordered_map<int, int> mapp;
    vector<pair<int, int>> result; 

    for (int num : arr) {
        
        int complement = target - num;   
        if (mapp.find(complement) != mapp.end()) {
            result.push_back({complement, num}); 
        }  
        mapp[num]++;
    }

    return result;
}

int main() {
    vector<int> arr = {2, 7, 11, 15, 1, 8};
    int target = 9;
    vector<pair<int, int>> pairs = twoSumPairs(arr, target);

    if (!pairs.empty()) {
        cout << "Pairs that sum to " << target << " are:" << endl;
        for (auto p : pairs) {
            cout << "(" << p.first << ", " << p.second << ")" << endl;
        }
    } else {
        cout << "No pairs sum to " << target << endl;
    }

    return 0;
}
