/* The function accepts an integer array 'arr' of size 'n' as its argument. The
function needs to
return the index of an equilibrium point in the array, where the sum of
elements on the left
of the index is equal to the sum of elements on the right of the index. If no
equilibrium point
exists return -1. */
#include<bits/stdc++.h>
using namespace std;

int findEquilibriumIndex(vector<int> &arr){
    long long totalSum = 0;
    int n = arr.size();
    int leftSum = 0;
    for(int i=0;i<n;i++){
        totalSum += arr[i];
    }
    for(int i=0;i<n;i++){
        int rightSum = totalSum - leftSum - arr[i];
        if(leftSum == rightSum){
            return i;
        }else{
            leftSum += arr[i];
        }
    }
    return -1;
}
int main() {
    vector<int> arr = {1, 3, 5, 2, 2};  // Example input
    int result = findEquilibriumIndex(arr);

    if (result != -1)
        cout << "Equilibrium index is: " << result << endl;
    else
        cout << "No equilibrium index found." << endl;

    return 0;
}
