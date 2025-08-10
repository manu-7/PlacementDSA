//Given a string s and an integer k, return the maximum number of vowel letters in any substring of s with length k.

#include<bits/stdc++.h>
using namespace std;

bool isVowel(char ch){
    return ch=='a'||ch=='e'||ch=='o'||ch=='u';
}

