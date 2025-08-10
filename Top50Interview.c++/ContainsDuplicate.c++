#include <bits/stdc++.h>
using namespace std;

bool ContainsDuplicate(vector<int> &arr) {
    unordered_map<int, int> mapp;

    for (int num : arr) {
        mapp[num]++;
        if (mapp[num] > 1) { 
            return true;
        }
    }
    return false; 
}

int main() {
    vector<int> arr = {1, 2, 3, 1};
    bool result = ContainsDuplicate(arr);
    cout << (result ? "true" : "false") << endl;
    return 0;
}
