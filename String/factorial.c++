#include <iostream>
using namespace std;

int main() {
    int n = 6;
    int fact = 1;

    if (n < 0) {
        cout << "Factorial of a negative number is not possible." << endl;
    } else {
        for (int i = 1; i <= n; i++) { // Changed i < n to i <= n
            fact *= i;
        }
        cout << "Factorial of " << n << " is " << fact << endl;
    }

    return 0;
}
