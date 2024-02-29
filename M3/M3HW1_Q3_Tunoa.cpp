// Csc 134
// M3HW1_Q3
// Robert Tunoa
// 2/28/24
#include <iostream>
using namespace std;

int main() {
// Variables 
int choice;
cout << "You wake up in a empty cell and you see a dead guard by your door" << endl;
cout << "Option 1: go towards the guard Option 2: Do nothing" << endl;
cout << "Type 1 or 2" << endl;
cin >> choice;
if (choice == 1) {
    cout << "You found a key on the guard and you open your cell" << endl;
    cout << "Option 1: Find a Weapon Option 3: Advance Foward" << endl;
    cout << "Type 1 or 3" << endl;
        cin >> choice;
} else if (choice == 2) {
    cout << "GAME OVER" << endl;
} if (choice == 1) {
    cout << "You've found a Claymore "<< endl;
    cout << "You then hear a loud roar up ahead" << endl;
    cout << "Option 4: Advance foward Option 5: Keep searching" << endl;
        cin >> choice;
} else if (choice == 3) {
    cout << "You get ambushed and die" << endl;
    cout << "GAME OVER" << endl;
} if (choice == 4){
    cout << "After advancing you find a huge gargoyle charging toward's you" << endl;
    cout << "Option 5: Dodge Option 6: Swing your sword" << endl;
        cin >> choice;
} else if (choice == 5) {
    cout << "You found a heater shield....." << endl;
    cout << "You then advance foward" << endl;
    cout << "After advancing you find a huge gargoyle charging toward's you" << endl;
    cout << "Option 5: Dodge Option 6: Swing your sword Option 7: Raise your shield"  << endl;
    cin >> choice;
} if (choice == 5) {
    cout << "You dodged the attack, then slashed your blade at the gargoyle, defeating it" << endl;
    cout << " After slaying the beast you see the huge double doors ahead open" << endl;
    cout << "Thank you for playing my demo!" << endl;
} else if (choice == 6) {
    cout << "You miss your attack and get eaten alive" << endl;
    cout << "GAME OVER" << endl;
} else if (choice == 7) {
    cout << "You parry the attack and stagger the beast putting it off balance" << endl;
    cout << "You then pierce your blade into the beast, defeating it in one blow" << endl;
    cout << "You receive a Sapphire Stone" << endl;
    cout << "After slaying the beast you see the huge double doors ahead open" << endl;
    cout << "Thank you for playing my demo!" << endl;
}




    return 0;
}