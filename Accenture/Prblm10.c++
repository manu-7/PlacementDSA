
// A Googly Prime Number is defined as a number whose sum of its digits is a prime number.

// For example:
// If N = 43, the sum of digits is 4 + 3 = 7, and since 7 is prime, 43 is a Googly Prime Number.
// If N = 123, the sum of digits is 1 + 2 + 3 = 6, and since 6 is not prime, 123 is not a Googly Prime Number.

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false; 
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Enter two or more digit number: ";
    cin >> n;
    
    int sum = 0;
    int temp = n; 
    while (n != 0) {
        int digit = n % 10;
        sum += digit;
        n /= 10;
    }

    if (isPrime(sum)) {
        cout << temp << " is a Googly Prime" << endl;
    } else {
        cout << temp << " is NOT a Googly Prime" << endl;
    }
    return 0;
}
