#include <iostream>

using namespace std;

int main() {
    int numPizzas, slicesPerPizza, numVisitors;

    // Get input from the user
    cout << "Enter the number of pizzas you ordered: ";
    cin >> numPizzas;

    cout << "Enter the number of slices per pizza: ";
    cin >> slicesPerPizza;

    cout << "Enter the number of visitors: ";
    cin >> numVisitors;

    // Calculate total number of slices
    int totalSlices = numPizzas * slicesPerPizza;

    // Calculate slices needed for visitors
    int slicesNeeded = numVisitors * 3;

    // Calculate leftover slices
    int leftoverSlices = totalSlices - slicesNeeded;

    // Display the result
    if (leftoverSlices >= 0) 
        cout << "You have " << leftoverSlices << " leftover slices of pizza." << endl;


    return 0;
}
