// Csc 134
// M3T3
// Robert Tunoa
// 2/21/24

#include <iostream>
#include <cstdlib> // for rand()
#include <ctime> // for time()
using namespace std;

int main() {
    cout << "Welcome to the crap's table" << endl;
    // Set up variables
    int roll;
    int die1, die2;
    int seed;

// Set random seed
//cout << " Enter lucky number: ";
//cin >> seed;
srand(time(0)); // our lucky # is the time in msec

    // roll the dice
    //cout << "What did you roll? ";
    //cin >> roll;
    die1 = (rand() % 6) +1;
    die2 = (rand() % 6) +1;
    roll = die1 + die2;

    // get the results
    cout << "Your roll was: (" << die1 << "+" << die2 << ") -> " << roll << endl;
    if (roll == 7 || roll == 11) {
        cout << "You win!" << endl;
    }
    else if (roll == 2 || roll == 3 || roll == 12) {
        cout << "You lose..." << endl;
        cout << "TODO: roll the point" << endl;
    }

    return 0;
}