#include<bits/stdc++.h>
using namespace std;

void ReverseSentence(string str){
    stack<string>st;
    for(int i=0;i<str.length();i++){
        string words = "";
        while(str[i] != ' ' && i<str.length()){
            words += str[i];
            i++;
        }
        st.push(words);
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}
int main(){
    string  str = "Hello, my name is manu singh";
    ReverseSentence(str);
}