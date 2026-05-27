/*
 * =====================================================================
 * 💻 STUDENT TASK: CREATE YOUR OWN SUPERHERO!
 * =====================================================================
 */

#include <iostream>
#include <string>
using namespace std;


// 1. Write your Superhero class here:
class Superhero {
public:
    // Attributes (Data)
    string name;
    string power;
    int powerLevel;

   
    // usePower() method
    void usePower() {
        cout << name << " uses " << power << "!" << endl;
    }

   
    // train() method
    void train() {
        powerLevel += 10;
        cout << name << " trained! Power is now "
             << powerLevel << "." << endl;
    }

   
}; // Don't forget the semicolon!


int main() {
   
    // 2. Create your first superhero object here:
    Superhero hero1;

    hero1.name = "ThunderMan";
    hero1.power = "Lightning Strike";
    hero1.powerLevel = 50;
   
   
    // 3. Create your second superhero object here:
    Superhero hero2;

    hero2.name = "ShadowGirl";
    hero2.power = "Invisibility";
    hero2.powerLevel = 70;
   
   
    // 4. Make them use their powers and train!
    hero1.usePower();
    hero1.train();

    cout << endl;

    hero2.usePower();
    hero2.train();


    return 0;
}