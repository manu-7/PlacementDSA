//Count number of vowels, consonants, spaces in String

#include<iostream>
using namespace std;

void CountCharachter(string str){
    int vowels = 0;
    int consonent = 0;
    int spaces = 0;

    for(int i=0;i<str.length();i++){
        char ch = tolower(str[i]);

        if(ch=='a' || ch=='e' || ch=='i'||ch=='o'||ch=='u'){
            vowels++;
        }else if(isalpha(ch)){
            consonent++;
        }else if(ch==' '){
            spaces++;
        }
    }
    cout<<"The number of vowels are:"<<vowels<<endl;
    cout<<"The number of consonents are:"<<consonent<<endl;
    cout<<"The number of spaces are:"<<spaces<<endl;

}

int main(){
    string str;

    cout<<"enter the string:"<<endl;
    getline(cin,str);
    CountCharachter(str);
    return 0;
}