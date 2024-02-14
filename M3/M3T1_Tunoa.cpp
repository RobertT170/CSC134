// Csc 134
// M3T1
// Robert Tunoa
// 2/14/24

#include <iostream>
using namespace std;

int main() {
    // Declare vaiables
    double lengthA, widthA;
    double areaA;
    // Ask for length and width of first rectangle
    cout << "What is the lengthA? ";
    cin >> lengthA; 
    cout << "What is the widthA? ";
    cin >> widthA;
    // Calculate the areas
    areaA = lengthA * widthA;
    //Print the areas
    cout << "The area is " << areaA << endl;

 // Declare vaiables B
    double lengthB, widthB;
    double areaB;
    // Ask for length and width of first rectangle
    cout << "What is the lengthB? ";
    cin >> lengthB; 
    cout << "What is the widthB? ";
    cin >> widthB;
    // Calculate the areas
    areaB = lengthB * widthB;
    //Print the areas
    cout << "The area is " << areaB << endl;
    if (areaA > areaB) {
        cout << "Rectangle A is bigger than Rectangle B";
    } else {
         cout << "Rectangle B is bigger than Rectangle A" << endl;
    }
    if (areaA == areaB) {
        cout << "Rectangle A is equal to Rectangle B";
    } else {
        cout << "Rectangle A is not equal to Rectangle B";
    
    }

    return 0;
    }