//Remove characters from a string except alphabets


#include<bits/stdc++.h>
using namespace std;

string removeChar(string str){
    string result;
    for(char ch:str){
        if(isalpha(ch)){
            result+=ch;
        }
    }
    return result;
}

int main(){
    string str;
    cout<<"Enter the string:"<<endl;
    getline(cin,str);
    
    string modifiedstr = removeChar(str);
    cout<<"The string after removing spaces is:"<<modifiedstr<<endl;
    return 0;

}