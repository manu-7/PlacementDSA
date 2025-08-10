#include<bits/stdc++.h>
using namespace std;

string Reverse(string s){
    stringstream ss(s);
    string token = "";
    string result = "";
    while(ss>>token){
        reverse(begin(token),end(token));
        result+=token +' ';
    }
    return result.substr(0,result.length()-1);
}
int main(){
    string s = "Mr Ding";
    string newresult = Reverse(s);
    
     cout<<newresult;
}