/*
M2LAB1
Crate Sales
Robert Tunoa
2/5/24
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Take 1 - just a rectangle
    // declare variables
    double length, width, height;
    double volume;
    const double COST_PER_CUBIC_FOOT = 0.23;
    const double CHARGE_PER_CUBIC_FOOT = 0.5;
    double cost; 
    double charge;
    cout << fixed << setprecision(2);
     // print the answer
    cout << "What's the length? " ;
    cin >> length;
    cout << "What's the width? ";
    cin >> width;
    cout << "What's the height ";
    cin >> height;
    
    // Do calculations
    // then charge to he customer, and the profit
    volume = length * width * height;
    cost = volume * COST_PER_CUBIC_FOOT;
    charge = volume * CHARGE_PER_CUBIC_FOOT;
    cout << "The volume is: " << volume << endl;
    cout << "The price is: $" << cost << endl;
    cout << "The charge is: $" << charge << endl;
    return 0;
} 