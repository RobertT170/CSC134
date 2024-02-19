// Csc 134
// M3 Lab 1 - Choices
// Robert Tunoa
// 2/19/24
// compiler directives
// (required for the program to run)

#include <iostream>
using namespace std;

// beginning of the main() method
int main() {
  
  // this program will ask a question and respond to it.
  // You should run it, and test it by typing in different values.
  // Example test values: 1, 2, 3, banana (try all of them)

  // declare the variable we need
  int choice; 

  // ask the question
  cout << "Cookies or Brownies?" << endl;
  cout << "Type 1 or 2: "; 
  cin >> choice;

  // using if, make a decision based on the user's choice

  if (1 == choice) {
  	cout << "You chose Cookies" << endl;
  }
  else if (2 == choice) {
  	cout << "You chose Brownies" << endl;
  }
  else {
  	cout << "I'm sorry, that is not a valid choice." << endl;
  }
  if (1 == choice) {
        cout << "What type of cookies do you like?" << endl;
        cout << "Chocolate chip or Peanut butter" << endl;
        cout << "Type 1 or 2: ";
        cin >> choice;
  }
  else if (2 == choice) {
        cout << "What type of brownies do you like?" << endl;
        cout << "Chocolate or Dark chocolate" << endl;
        cout << "Type 1 or 2: ";
        cin >> choice;
  }
  if (1 == choice) {
        cout << "What type of milk do you like?" << endl;
        cout << "Almond or Regular" << endl;
        cout << "Type 1 or 2: ";
        cin >> choice;
  }
    else if (2 == choice) {
        cout << "What type of milk do you like?" << endl;
        cout << "Almond or Regular" << endl;
        cout << "Type 1 or 2: ";
        cin >> choice;
    }
  // finish up
  cout << "Thanks for completing the survey!" << endl; // this runs no matter what they choose
  return 0; // exit without error

} // end of the main() method