// Csc 134
// M5T2
// Robert Tunoa
// 3/20/24

#include <iostream>
using namespace std;

// functions prototypes here
int square(int);
void printAnswerLine(int, int);

// function definitions here
int main() {
    cout << "M5T2" << endl;
    cout << "Printing a table of squares" << endl;
    cout << "Num\t\tNum Squared" << endl;
    cout << "____________________________" << endl;

    // In a loop,
    // find the square of the nnumber
    // then call printAnswerLine with number and square
    //TODO
    int num, num_squared;
    //num = 1;
    for (int num=1; num <= 10; num++){
        num_squared = square(num);
        printAnswerLine(num, num_squared);
    }
    

    return 0;
}

int square(int number){
    // input: a number
    // output: number squared
    int answer = number * number;
    return answer;
}
void printAnswerLine(int first, int second) {
    // print two numbers with tab seperation 
    cout << first << "\t" << second << endl;
}