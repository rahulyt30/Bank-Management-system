#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Bank {
    int accountNumber;
    string name;
    string mobile;
    string address;
    float balance;

public:
    Bank() {
        accountNumber = 1000 + rand() % 9000;
    }

    void openAccount() {
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Mobile Number: ";
        getline(cin, mobile);
        cout << "Enter Address: ";
        getline(cin, address);
        cout << "Enter Initial Balance: ";
        cin >> balance;
        cout << "\nAccount created successfully!\n";
        cout << "Your Account Number is: " << accountNumber << "\n";
    }

    void deposit() {
        float amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;
        balance += amount;
        cout << "Amount deposited successfully!\n";
    }

    void withdraw() {
        float amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        if (amount > balance)
            cout << "Insufficient balance!\n";
        else {
            balance -= amount;
            cout << "Amount withdrawn successfully!\n";
        }
    }

    void display() {
        cout << "\nAccount Number: " << accountNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Mobile Number: " << mobile << endl;
        cout << "Address: " << address << endl;
        cout << "Balance: " << balance << endl;
    }

    int getAccountNumber() { return accountNumber; }
    string getName() { return name; }
};

int main() {
    srand(time(0));
    Bank accounts[10];
    int totalAccounts = 0;
    int choice;

    do {
        cout << "\n----- BANK MANAGEMENT SYSTEM -----\n";
        cout << "1. Open Account\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Display Account\n";
        cout << "5. Exit\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        switch (choice) {
            case 1:
                if (totalAccounts < 10) {
                    accounts[totalAccounts].openAccount();
                    totalAccounts++;
                } else {
                    cout << "Account limit reached!\n";
                }
                break;

            case 2: {
                int accNum;
                cout << "Enter Account Number: ";
                cin >> accNum;
                bool found = false;
                for (int i = 0; i < totalAccounts; i++) {
                    if (accounts[i].getAccountNumber() == accNum) {
                        accounts[i].deposit();
                        found = true;
                        break;
                    }
                }
                if (!found)
                    cout << "Account not found!\n";
                break;
            }

            case 3: {
                int accNum;
                cout << "Enter Account Number: ";
                cin >> accNum;
                bool found = false;
                for (int i = 0; i < totalAccounts; i++) {
                    if (accounts[i].getAccountNumber() == accNum) {
                        accounts[i].withdraw();
                        found = true;
                        break;
                    }
                }
                if (!found)
                    cout << "Account not found!\n";
                break;
            }

            case 4: {
                int accNum;
                string name;
                cout << "Enter Account Number: ";
                cin >> accNum;
                cin.ignore();
                cout << "Enter Name: ";
                getline(cin, name);
                bool found = false;
                for (int i = 0; i < totalAccounts; i++) {
                    if (accounts[i].getAccountNumber() == accNum && accounts[i].getName() == name) {
                        accounts[i].display();
                        found = true;
                        break;
                    }
                }
                if (!found)
                    cout << "Account not found or name does not match!\n";
                break;
            }

            case 5:
                cout << "Thank you for using Bank Management System!\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 5);

    return 0;
}
