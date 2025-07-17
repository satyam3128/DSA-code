#include <iostream>
using namespace std;

class BankAccount {
    string name;
    int balance;
    int account_number;

public:
    BankAccount(string name, int balance, int account_number) {
        this->name = name;
        this->balance = balance;
        this->account_number = account_number;
    }

    void deposit(int amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited Amount: " << amount << endl;
        } else {
            cout << "Invalid Amount" << endl;
        }
    }

    void withdraw(int amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn Amount: " << amount << endl;
        } else {
            cout << "Insufficient Balance or Invalid Amount" << endl;
        }
    }

    void display() {
        cout << "\n--- Account Details ---\n";
        cout << "Account Holder: " << name << endl;
        cout << "Account Number: " << account_number << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    string name;
    int accountNumber;
    int balance;

    cout << "Enter the Account Holder Name: ";
    getline(cin, name);

    cout << "Enter the Account Number: ";
    cin >> accountNumber;

    cout << "Enter the Initial Balance: ";
    cin >> balance;

    BankAccount account(name, balance, accountNumber);

    int choice;
    int amount;

    do {
        cout << "\n-- Bank Menu --\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Display Details\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the Deposit Amount: ";
                cin >> amount;
                account.deposit(amount);
                break;

            case 2:
                cout << "Enter the Withdraw Amount: ";
                cin >> amount;
                account.withdraw(amount);
                break;

            case 3:
                account.display();
                break;

            case 4:
                cout << "Thank you for using our service." << endl;
                break;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }

    } while (choice != 4);

    return 0;
}
