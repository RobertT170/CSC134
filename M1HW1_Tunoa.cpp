/* CSC 134
M1HW1
Robert Tunoa
1/24/24
*/

#include <iostream>
using namespace std;

int main ()
{
    cout << "M1HW1 - Movie Talk" << endl;
    // Simulate movie review
    // Set up variables (nouns)
    string name = "Robert's";
    int gross_income = 11.0;
    int released_year = 1999;
    string movie_name = "Fight Club";

    // Print the output
    cout << "Welcome to " << name << " Movie Talk" << endl;
    cout << "Movie of choice is Fight Club" << endl;
    cout << "This movie came out in " << released_year << " and earned a gross of $" << gross_income << " million" << endl;
    cout << "Some of my favorite quotes from the movie are of the following:" << endl;
    cout << "\"It's only after we've lost everything that we're free to do anything\" - Tyler Durden" << endl;
    cout << "\"The first rule of Fight Club is you do not talk about fight club\" - Tyler Durden" << endl;
    cout << "\"The things you own end up owning you\" - The Narrator" << endl;

    return 0;
}