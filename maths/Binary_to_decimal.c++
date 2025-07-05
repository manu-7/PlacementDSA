#include<bits/stdc++.h>
using namespace std;

int binaryToDecimal(long long num){
    int i=0;
    int decimal = 0;

    while(num!=0){
        int digit = num % 10;
        decimal += digit * pow(2,i);
        num /= 10;
        i++;
    }
    return decimal;
}

int main(){
    long long num;
    cout<<"enter the binary digit:";
    cin>>num;
    cout<<binaryToDecimal(num);
    return 0;
}