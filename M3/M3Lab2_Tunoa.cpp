// Csc 134
// M3 Lab 2
// Robert Tunoa
// Date

#include <iostream>
using namespace std;

int main() {

// Declare Variables
    int grade;
    int arr[100];

// Ask question
    cout << "Enter your numerical grade: " << endl;
    cin >> grade;
    if (grade >= 90 && grade <= 100) {
        cout << "Your letter grade is: A " << endl;
    } else if ( grade >= 80 && grade <= 89) {
        cout << "Your letter grade is: B " << endl;
    } else if ( grade >= 70 && grade <= 79) {
        cout << "Your letter grade is: C " << endl;
    } else if ( grade >= 60 && grade <= 69) {
        cout << "Your letter grade is: D " << endl;
    } else if ( grade >= 0 && grade <= 59) {
        cout << "Your letter grade is: F " << endl;
    } else if (grade < 0) {
        cout << "This is a invaild number" << endl;
    }


    return 0;
}