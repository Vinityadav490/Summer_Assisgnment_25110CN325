#include <iostream>
using namespace std;

int main() {
    int balance = 1000;
    int choice, amount;

    cout << "1.Deposit 2.Withdraw 3.Balance\n";
    cin >> choice;

    if (choice == 1) {
        cin >> amount;
        balance += amount;
        cout << "New Balance = " << balance;
    }
    else if (choice == 2) {
        cin >> amount;
        if (amount <= balance) {
            balance -= amount;
            cout << "New Balance = " << balance;
        } else {
            cout << "Insufficient Balance";
        }
    }
    else if (choice == 3) {
        cout << "Balance = " << balance;
    }

    return 0;
}