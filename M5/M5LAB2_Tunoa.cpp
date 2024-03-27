// Csc 134
// M5LAB2
// Robert Tunoa
// 3/27/24

#include <iostream>
using namespace std;

// Declare (Write the prototypes for)
// the getLength,
// getWidth, getArea, and displayData
// functions here.

double getLength();
double getWidth();
double getArea(double length, double width);
double displayData(double length, double width, double area);
int main()
{
	// This program calculates the area of a rectangle.
	// TODO: fix any syntax errors
	
    double  length,    // The rectangle's length
            width,     // The rectangle's width
            area;      // The rectangle's area
          
   // Get the rectangle's length.
   length = getLength();
   
   // Get the rectangle's width.
   width = getWidth();
   
   // Get the rectangle's area.
   area = getArea(length, width);
   
   // Display the rectangle's data.
   displayData(length, width, area);
          
   return 0;
}

//***************************************************
// TODO: write the getLength, getWidth, getArea,    *
// and displayData functions below.                 *
//***************************************************

double getLength() {
    int length;
    // ask user for length
    cout << "What is the length of the rectangle? ";
    cin >> length;
    return length;
}

double getWidth() {
    int Width;
    // ask user for width
    cout << "What is the width of the rectangle? ";
    cin >> Width;
    return Width;
}

double getArea(double length, double width) {
    int Area;
    Area = length * width;
    // Print the answer
    cout << "The Area of the Rectangle is: " << Area << endl;
    return Area;
}

double displayData(double length, double width, double area) {
    int displayData;
    // Print the answer
    cout << "Retangle: (" << length << "," << width << "," << area << ")" << endl;
    return displayData;
}