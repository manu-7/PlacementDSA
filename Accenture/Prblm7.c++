/* You're participating in a coin toss game called Toss and Score at the Hillwood City Mall. In this game, a fair coin is tossed multiple times.
Each toss results in either a Head ('H') or a Tail ('T'), and the outcomes are given to you as a string S. The scoring rules are as follows:
Each time you get a Head ('H'), you earn +1 point.
Each time you get a Tail ('T'), you lose 1 point.
The game continues until you either finish processing the entire string or get 3 consecutive Heads, whichever happens first.
Your task is to calculate and return the final score once the game ends, based on the given toss sequence. */


#include<bits/stdc++.h>
using namespace std;

int calculateScore(string S){
    int score = 0;
    int headCount = 0;
    for(char ch:S){
        if(ch == 'H'){
            score += 1;
            headCount++;
            if(headCount == 3){
                break;
            }
        }else if(ch == 'T'){
            score -= 1;
            headCount = 0;
        }
    }
    return score;

}

int main() {
    string S;
    cout << "Enter the toss sequence: ";
    cin >> S;

    int result = calculateScore(S);
    cout << "Final Score: " << result << endl;

    return 0;
}