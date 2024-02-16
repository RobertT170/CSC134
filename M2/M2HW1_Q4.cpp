/*
M2HW1
Question 4
Banking
Robert Tunoa
2/12/24
*/
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>
int setprecision(2);
using namespace std;

class BankAccount {
private:
    string name;
    int accountNumber;
    double balance;
    
public:
    BankAccount(string n, double bal) {
        name = n;
        balance = bal;
        srand(time(0)); // Seed for random number generation
        accountNumber = rand() % 10000 + 1000; // Generating a random 4-digit account number
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
        } else {
            cout << "Insufficient funds!" << endl;
        }
    }

    void displayInfo() {
        cout << "Name on the account: " << name << endl;
        cout << "Account number: " << accountNumber << endl;
        cout << "Final account balance: $" << balance << endl;
    }
};

int main() {
    string name;
    double startingBalance, deposit, withdrawal;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter starting account balance: $";
    cin >> startingBalance;

    cout << "Enter amount of deposit: $";
    cin >> deposit;

    cout << "Enter amount of withdrawal: $";
    cin >> withdrawal;

    BankAccount account(name, startingBalance);
    account.deposit(deposit);
    account.withdraw(withdrawal);
    account.displayInfo();

    return 0;
}
