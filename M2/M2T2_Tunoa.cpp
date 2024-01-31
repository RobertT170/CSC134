/* CSC 134
M2T2 - Apple Orchard Part 2
Robert Tunoa
1/31/24
*/

#include <iostream> 
using namespace std;

int main ()
{
    // declare variables
    string name;
    int apples;
    double price_each;
    double total;
   // Ask user for information
cout << "Hi, what's your name? " << endl;
cin >> name;
cout << "Welcome to our orchard, " << name << endl;
// ask how many apples they want
cout << "How many apples do you want? ";
cin >> apples;
// Ask the price for each



// Print the output
// print number of apples, price each
cout << "What's the price per apple" << endl;
cin >> price_each;
// Do calculation
total = apples * price_each;
cout << "For a total cost of $" << total << endl;
    return 0;
}