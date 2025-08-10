#include<bits/stdc++.h>
using namespace std;

string removeSpaces(string str){
    string result;
    for(char ch:str){
        if(!(ch==' ')){
            result+=ch;
        }
    }
    return result;
}
int main(){
    string str;
    cout<<"Enter the string:"<<endl;
    getline(cin,str);
    
    string modifiedstr = removeSpaces(str);
    cout<<"The string after removing spaces is:"<<modifiedstr<<endl;
    return 0;

}