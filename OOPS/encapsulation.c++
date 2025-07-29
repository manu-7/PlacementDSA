// Encapsulation is wrapping up of data & member funtions in a single unit called class
// helps in hiding sensitive information

#include <iostream>
using namespace std;

// Create a class called Account
class Account {
private:
    int balance;     // Can't be seen or changed directly
    string password; // Hidden password

public:
    // Set account details
    void setDetails(int b, string pass) {
        balance = b;
        password = pass;
    }

    // Show balance (only if password is correct)
    void showBalance(string pass) {
        if (pass == password) {
            cout << "Your balance is: " << balance << endl;
        } else {
            cout << "Wrong password!" << endl;
        }
    }
};

int main() {
    Account myAccount;

    // Set the balance and password
    myAccount.setDetails(1000, "abc123");

    // Try to check balance with wrong password
    myAccount.showBalance("wrong");   // Output: Wrong password!

    // Try with correct password
    myAccount.showBalance("abc123");  // Output: Your balance is: 1000

    return 0;
}
