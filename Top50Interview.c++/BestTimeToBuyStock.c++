#include<bits/stdc++.h>
using namespace std;

//Logic

// minPrice: The minimum price observed so far.
// profit: The profit if you sell on the current day.
// maxProfit: The highest profit observed so far.

int bestProfit(vector<int>arr,int n){
    int minPrice = INT_MAX;
    int maxProfit = 0;
    for(int i=0;i<n;i++){
        minPrice = min(minPrice,arr[i]);
        int profit = arr[i] - minPrice;
        maxProfit = max(maxProfit,profit); 
    }
    return maxProfit;
}
int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int n = prices.size();
    cout << "Maximum Profit: " << bestProfit(prices, n) << endl;
    return 0;
}