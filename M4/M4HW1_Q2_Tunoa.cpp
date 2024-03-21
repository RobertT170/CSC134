// Csc 134
// M4_HW1_Q2
// Robert Tunoa
// 3/16/24
#include <iostream>

using namespace std;

int main() {
    int number;

    // Prompt user for input
    cout << "Enter a number from 1 to 12? ";
    cin >> number;

    // Validate user input
    if (number < 1 || number > 12) {
        cout << "Invalid input. Please enter a number from 1 to 12." << endl;
        return 1;
    }

    int i = 1;
    while (i <= 12) {
        cout << number << " times " << i << " is " << number * i << "." << endl;
        i++;
    }
    return 0;
}
