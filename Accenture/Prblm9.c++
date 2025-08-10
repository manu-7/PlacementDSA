#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num){
    if(num<2){
        return false;
    }
    for(int i=2;i*i<=num;i++){
        if(num % 2 ==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cout<<"enter the size of arr:";
    cin>>n;
    int arr[n];
    cout<<"Enter the array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum = 0;
    for(int i=0;i<n;i++){
        if(isPrime(i)){
            sum += arr[i];
        }
    }
    cout<<sum<<endl;
    return 0;
}
