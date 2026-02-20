#include <iostream>
using namespace std;

int main() {
    int balance = 10000;
    int n, choice, amount;
    cout << "Enter number of transactions: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Transaction " << i << " of " << n << endl;
        cout << "1. Withdraw" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Balance Inquiry" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) { // Withdraw
            cout << "Enter amount to withdraw: ";
            cin >> amount;

            // 4. Withdrawal conditions
            if (amount > 5000) {
                cout << "Error: Maximum withdrawal limit is 5000 at once!" << endl;
            } else if (amount > balance) {
                cout << "Error: Insufficient balance!" << endl;
            } else {
                balance -= amount;
                cout << "Withdrawal Successful! Amount deducted: " << amount << endl;
            }

        } else if (choice == 2) { // Deposit
            cout << "Enter amount to deposit: ";
            cin >> amount;
            if (amount > 0) {
                balance += amount;
                cout << "Deposit Successful!" << endl;
            } else {
                cout << "Invalid amount!" << endl;
            }

        } else if (choice == 3) { // Balance Inquiry
            cout << "Current Balance: " << balance << endl;

        } else { // Invalid Choice
            cout << "Invalid Choice! Please try again." << endl;
        }
    }

    // 5. At the end, show final balance
    cout << "Final Balance: " << balance << endl;

    return 0;
}