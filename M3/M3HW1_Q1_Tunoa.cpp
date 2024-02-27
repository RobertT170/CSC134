// Csc 134
// M3HW1
// Robert Tunoa
// 2/26/24
#include <iostream>
using namespace std;

int main() {
    // Declare Variables
    int choice;

    // Ask the initial question
    cout << "Hello, I'm a chatbot!" << endl;
    cout << "Do you want to chat?" << endl;
    cout << "Type 1 for yes or 2 for no" << endl;
    cin >> choice;

    if (choice == 1) {
        cout << "Great! Is your day going well?" << endl;
        cout << "Type 3 for yes or 4 for no" << endl;
        cin >> choice;

        if (choice == 3) {
            cout << "I'm glad. Do you like my service?" << endl;
            cout << "Type 5 for yes or 6 for no" << endl;
            cin >> choice;
            
            if (choice == 5) {
                cout << "Awesome, I'm glad you like it. Goodbye!" << endl;
            } else if (choice == 6) {
                cout << "I'm sorry you feel that way. I will work to be better next time. Goodbye!" << endl;
            } else {
                cout << "Invalid choice. Goodbye!" << endl;
            }
        } else if (choice == 4) {
            cout << "I'm sorry to hear that. Do you like my service?" << endl;
            cout << "Type 5 for yes or 6 for no" << endl;
            cin >> choice;

            if (choice == 5) {
                cout << "Awesome, I'm glad you like it. Goodbye!" << endl;
            } else if (choice == 6) {
                cout << "I'm sorry you feel that way. I will work to be better next time. Goodbye!" << endl;
            } else {
                cout << "Invalid choice. Goodbye!" << endl;
            }
        } else {
            cout << "Invalid choice. Goodbye!" << endl;
        }
    } else if (choice == 2) {
        cout << "Ok, goodbye" << endl;
    } else {
        cout << "Invalid choice. Goodbye!" << endl;
    }

    return 0;
}