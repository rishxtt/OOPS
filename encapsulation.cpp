#include<iostream>
using namespace std;

class Student {
    private: 
        string name;
        int age;
        int height;

    public:
    int getAge() {
        return age;
    }
    void setAge(int a) {
        age = a;
    }
};
int main() {
    Student rishit;
    rishit.setAge(20);
    cout << rishit.getAge() << endl;
}