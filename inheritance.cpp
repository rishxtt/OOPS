#include<iostream>
using namespace std;

class Human {
    public:
        int height;
        int weight;
        int age;

    public: 
    int getAge() {
        return this -> age;
    }

    void setWeight(int w) {
        this -> weight = w;
    }
};

class Male: public Human {
    
    public:
        void setHeight(int h) {
            this -> height = h;
        }

        void sleep() {
            cout << "male sleeping" << endl;
        }
};

int main() {
    Male obj1;
    obj1.setWeight(80);
    obj1.setHeight(180);
    cout << obj1.age << endl;
    cout << obj1.weight << endl;
    cout << obj1.height << endl;
    obj1.sleep();
    return 0;

}