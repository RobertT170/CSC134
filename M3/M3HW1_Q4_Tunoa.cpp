// Csc 134
// M3HW1_Q4
// Robert Tunoa
// 2/28/24
#include <iostream>
#include <random>

using namespace std;

int main() {
    // Seed the random number generator
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> distribution(0, 100);
    
    // Generate two single-digit random numbers
    int num1 = distribution(gen);
    int num2 = distribution(gen);
    
    // Print the equation
    cout << "What is " << num1 << " + " << num2 << "?" << endl;
    
    // Get the user's answer
    int userAnswer;
    cin >> userAnswer;
    
    // Check if the user's answer is correct
    if (userAnswer == num1 + num2) {
        cout << "Correct." << endl;
    } else {
        cout << "Incorrect." << endl;
    }
    
    return 0;
}
