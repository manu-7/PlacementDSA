#include<bits/stdc++.h>
using namespace std;

bool Palindrome(string s){
    int i = 0;
    int j = s.length()-1;

    while(i<j){
        isalpha(!(s[i]));
        i++;
        isalpha(!(s[j]));
        j--;
        if(tolower(s[i])!=tolower(s[j])){
            return false;
        }else{
            i++;
            j--;
        }
    }
    return true;
}
int main(){
    string  s= "Race car";
    bool ans = Palindrome(s);
    cout<<ans;

}