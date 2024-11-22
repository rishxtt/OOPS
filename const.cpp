#include <iostream>
using namespace std;
class Hero {
public:
    int health;
    Hero(int h) : health(h) {} // initialisation list
    static int timeToComplete; // Static Keyword
    
    void setHealth(int h) {
        health = h;
    }

    int getHealth() const {
        return health;
    }
};
int Hero :: timeToComplete = 5; // Static-Initialisation
int main() {
    const Hero hero1(100);
    // hero1.setHealth(80); // Error: Cannot modify a const object

    cout << hero1.getHealth() << endl; // This is allowed as getHealth() is a const function
    cout << Hero :: timeToComplete;


}
