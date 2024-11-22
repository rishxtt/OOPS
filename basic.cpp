#include<iostream>
using namespace std;

class Hero {
    private:
    int health;

    public:
    char level;

    int getHealth() {
        return health;
    }
    // getter & setter function
    void setHealth(int h) {
        health = h;
    }

    char getLevel() {
        return level;
    }

    void setLevel(char l) {
        level = l;
    }
};

int main() {
    // static allocation
    Hero rishit;
    cout<<sizeof(rishit)<<endl;
    rishit.setHealth(100);
    rishit.setLevel('A');
    // rishit.level = 'A';
    cout << "Level is: "<<rishit.getLevel() << endl;
    cout << "Health is: "<<rishit.getHealth()<<endl;

    // dynamic allocation
    Hero *a = new Hero;
    (*a).setHealth(50);
    (*a).level = 'B';
     cout << "Level is: "<<(*a).level << endl;
     cout << "Health is: "<<(*a).getHealth()<<endl; 



}