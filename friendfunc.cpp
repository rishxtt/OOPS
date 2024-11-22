#include<iostream>
using namespace std;
class MyClass {
    private:
    int data;

    public:
    MyClass(int value) : data(value) {}

    // Declare Friend Function
    friend void displayData(MyClass &obj);
};

// Definition Of Friend Function
void displayData(MyClass &obj) {
    // Access Private Member Directly
    cout << "Data: " << obj.data << endl;
}
int main() {
    MyClass obj(10);
    displayData(obj); // Call Friend Function
    return 0;
}