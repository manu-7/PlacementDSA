 /* Alice has collection of songs represented as a string S where each
character represents a
song. A playlist is the substring of the given string with exactly k number of
songs. She wants
to create a playlist that contains maximum number of her favourite song
Accenture 2025 Shift Coding Sheet 3 which is 'a'. Your task
is to find and return an integer value representing the maximum number of
favourite songs
that she can get in a single playlist. */

#include<bits/stdc++.h>
using namespace std;
int maxFavouriteSongs(string S, int k) {
    int maxCount = 0;
    int currentCount = 0;

    for(int i=0;i<k;i++){
        if(S[i] == 'a'){
            currentCount++;
        }
    }
    for(int i=0;i<S.length();i++){
        if(S[i-k]=='a'){
            currentCount--;
        } 
        if (S[i] == 'a') {
            currentCount++;
        }
    }
    maxCount = max(currentCount,maxCount);
}

int main() {
    string S = "abcaab";  
    int k = 3;            

    int result = maxFavouriteSongs(S, k);
    cout << "Maximum favourite songs in a playlist of size " << k << " is: " << result << endl;

    return 0;
}