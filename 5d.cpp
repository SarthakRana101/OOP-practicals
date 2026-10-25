#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string holderName;
    int accNumber;
    double balance;

public:
    // Constructor to initialize via user input
    BankAccount() {
        cout << "Enter Account Holder Name: ";
        cin.ignore();
        getline(cin, holderName);
        cout << "Enter Account Number: ";
        cin >> accNumber;
        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid amount!\n";
        }
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance!\n";
        } else if (amount > 0) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Invalid amount!\n";
        }
    }

    void display() {
        cout << "\nAccount Number : " << accNumber;
        cout << "\nHolder Name    : " << holderName;
        cout << "\nCurrent Balance: " << balance << "\n\n";
    }
};

int main() {
    cout << " Create Bank Account \n";
    BankAccount acc;   
    int choice;
    double amount;

    do {
        cout << "1. Deposit\n2. Withdraw\n3. Display\n0. Exit\nChoice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                acc.deposit(amount);
                break;
            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                acc.withdraw(amount);
                break;
            case 3:
                acc.display();
                break;
            case 0:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 0);

    return 0;
}