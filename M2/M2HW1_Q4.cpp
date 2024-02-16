/*
M2HW1
Question 4
Banking
Robert Tunoa
2/12/24
*/
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
// Declare Variables
string name;
double starting_balance;
double amount_of_deposit;
double amount_of_withdrawal; 
double final_acc_balance;
double accountnum = 983823040;
cout << fixed << setprecision(2);
// Ask for name, starting balance, amount of deposit, withdrawal
cout << "Greetings, What's your name" << endl;
cin >> name;
cout << "What's your starting balance" << endl;
cout << "$";
cin >> starting_balance;
cout << "What's your amount of deposit" << endl;
cout << "$";
cin >> amount_of_deposit;
cout << "What's your amount of withdrawal" << endl;
cout << "$";
cin >> amount_of_withdrawal;

// Do calculations
final_acc_balance = starting_balance + amount_of_deposit - amount_of_withdrawal;

// Display account name, number, final balance
cout << "Account name: " << name << endl;
cout << "# " << accountnum << endl;
cout << "Account balance: $" << final_acc_balance << endl;

    return 0;
}
