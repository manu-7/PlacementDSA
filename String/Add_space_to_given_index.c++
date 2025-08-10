#include<bits/stdc++.h>
using namespace std;

string AddSpaces(string s,vector<int>spaces){
    string str = "";
    int m = s.size();
    int n = spaces.size();

    int j = 0;

    for(int i=0;i<m;i++){
        if(j<n && i==spaces[j]){
            str += ' ';
            j++;
        }
        str+=s[i];
    }
    return str;
}

int main(){
    string str = "helloBabyHowAreYou";
    vector<int>spaces = {5,9,12,15};
    string result = AddSpaces(str,spaces);
    cout<<"modified String is:"<<result<<endl;
    return 0;

}