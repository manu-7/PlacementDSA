//Sum of the Numbers in a String

#include<bits/stdc++.h>

using namespace std;

int sumOfDigits(const string& str) {
    int sum = 0;
    
    for (char ch : str) {
        
        if (isdigit(ch)) {
            // Convert the character to an integer and add it to sum
            sum += ch - '0';
        }
    }

    return sum;
}

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str); 

    int totalSum = sumOfDigits(str); 
    cout << "The sum of the digits in the string is: " << totalSum << endl;

    return 0;
}
