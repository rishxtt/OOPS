#include<iostream>
using namespace std; 

class Animal {
    public:
    void speak() {
        cout << "Speaking" << endl;
    }
};

class Dog: public Animal {
    public:
    void speak() {
        cout << "Barking" <<endl;
    }
};
int main() {
    Animal obj;
    obj.speak();

    Dog obj1;
    obj1.speak();
}