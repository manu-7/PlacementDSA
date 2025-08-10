//Partition Array According to Given Pivot

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> arr(nums.size());
        int idx = 0;
        
        for (int i : nums) {
            if (i < pivot) {
                arr[idx] = i;
                idx++;
            }
        }

        for (int i : nums) {
            if (i == pivot) {
                arr[idx] = i;
                idx++;
            }
        }

        for (int i : nums) {
            if (i > pivot) {
                arr[idx] = i;
                idx++;
            }
        }

        return arr;
    }
};

int main() {
    Solution solution;
    vector<int> arr = {0,1, 7, 3, 2, 5, 5, 6, 2};
    int pivot;


    cout << "Enter the pivot: ";
    cin >> pivot;

    vector<int> result = solution.pivotArray(arr, pivot);

    cout << "Rearranged Array: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
