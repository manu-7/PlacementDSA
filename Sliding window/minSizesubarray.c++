#include<bits/stdc++.h>
using namespace std;

int minsubarray(int target,vector<int> &nums){

    int left =0;
    int right = 0;
    int currentsum = 0;
    int res = INT_MAX;

    for(int right=0;right<nums.size();right++){
        currentsum += nums[right];

        while(currentsum >= target){
            res = min(res,right-left+1);
            currentsum -= nums[left];
            left++;
        }
    }
    return res == INT_MAX ? 0 : res; 

}

int main(){
    vector<int>nums = {2,3,1,2,4,3};
    int target = 7;
    int result = minsubarray(target,nums);
    cout<<"the minimum subarray is:"<<result<<endl;
    return 0;
}