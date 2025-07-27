#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long N) {
    if (N <= 1) return false;
    for (long long i = 2; i * i <= N; i++) {
        if (N % i == 0) return false;
    }
    return true;
}

int main() {
    long long n;
    cout << "Enter the number: ";
    cin >> n;

    long long sum = 0;
    for (long long i = 2; i <= n; i++) {
        if (isPrime(i)) {
            sum += i;
        }
    }

    cout << "Sum of all prime numbers till " << n << " is: " << sum << endl;
    return 0;
}
