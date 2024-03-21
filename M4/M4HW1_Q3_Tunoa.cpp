// Csc 134
// M4_HW1_Q3
// Robert Tunoa
// 3/16/24
#include <iostream>

using namespace std;

int main() {
    int number;

    // Input validation loop
    do {
        cout << "Enter a number from 1 to 12? ";
        cin >> number;

        // Check if input is valid
        if (number < 1 || number > 12) {
            cout << "Invalid input. Please enter a number from 1 to 12." << endl;
        }
    } while (number < 1 || number > 12);

    // Print times table
    int i = 1;
    while (i <= 12) {
        cout << number << " times " << i << " is " << number * i << "." << endl;
        i++;
    }
    return 0;
}
