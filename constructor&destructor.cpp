#include <iostream>
using namespace std;

class Hero
{
private:
    int health;

public:
    char level;

    Hero()
    {
        cout << "Constructor Called" << endl; // default constructor
    }

    Hero(int health, char level)
    { // parameterized constructor and this keyword
        this->health = health;
        this->level = level;
    }

    Hero(Hero& temp) {
        // copy constructor
        this -> health = temp.health;
        this -> level = temp.level;
    }

    void print()
    {
        cout << "Health is " << health << endl;
        cout << "Level is " << level << endl;
    }

    ~Hero() {
        cout<<"Destructor Called"<<endl;
    }
};

int main()
{

    Hero temp(100, 'A');
    temp.print();
    Hero temp1(temp); // copy constructor call
    temp1.print();
    
    Hero *b = new Hero(100, 'A'); 
    b->print();
    delete b; // destructor call for dynamic allocation
}