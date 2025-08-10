//Rearrange Array Elements by Sign

#include <bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
    int n = nums.size();
    vector<int> pos;
    vector<int> neg;

    for (int i = 0; i < n; i++) {
        if (nums[i] > 0) {
            pos.push_back(nums[i]);
        } else {
            neg.push_back(nums[i]);
        }
    }

    for (int i = 0; i < n / 2; i++) {
        nums[2 * i] = pos[i];       
        nums[2 * i + 1] = neg[i];   
    }

    return nums;
}

int main() {

    vector<int> nums = {3, -2, 5, -4, -1, 2};
    vector<int> result = rearrangeArray(nums);
    cout << "Rearranged Array: ";
    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}
