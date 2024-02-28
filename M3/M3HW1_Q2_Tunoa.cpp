// Csc 134
// M3HW1_Q2
// Robert Tunoa
// 2/27/24
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    //set up variables
    double meal_price;
    int choice;
    double dinein_meal_price;
    double tip_percent = 0.15;
    double tip_amount;
    double total;
    double tax_percent = .08;
    double tax_amount;
    //Ask for price
    cout << "Enter the price of your meal:" << endl;
    cout << "$";
    cin >> meal_price;
    cout << "Dine in or take out? " << endl;
    cout << "Enter 1 for dine in or 2 for take out" << endl;
    cin >> choice;
    // do calculations
    tip_amount = meal_price * tip_percent;
    tax_amount = meal_price * tax_percent;
    total = meal_price + tip_amount + tax_amount;
    if (choice == 1) {
        cout << "Thank you for dining with us" << endl;
        cout << "----------------------------" << endl;
        cout << fixed << setprecision(2);
        cout << "Meal:"     << "\t\t$" << meal_price << endl;
        cout << "Tip:"    << "\t\t$" << tip_amount << endl;
        cout << "Tax:"    << "\t\t$" << tax_amount << endl;
        cout << "----------------------------" << endl;
        cout << "Total:"  << "\t\t$" << total << endl;
        
    } else if (choice == 2) {
        double takeout_price;
        double takeout_tip = 0;
        tax_amount = meal_price * tax_percent;
        total = meal_price + takeout_tip + tax_amount;
        cout << "Thank you for taking out with us" << endl;
        cout << "----------------------------" << endl;
        cout << fixed << setprecision(2);
        cout << "Meal:"     << "\t\t$" << meal_price << endl;
        cout << "Tip:"    << "\t\t$" << takeout_tip << endl;
        cout << "Tax:"    << "\t\t$" << tax_amount << endl;
        cout << "----------------------------" << endl;
        cout << "Total:"  << "\t\t$" << total << endl;
    }




    return 0;
}