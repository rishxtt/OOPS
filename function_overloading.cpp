#include<iostream>
using namespace std;

class Calculator {
public:
    // Function to add two numbers
    int add(int num1, int num2) {
        return num1 + num2;
    }

    // Function to add three numbers
    int add(int num1, int num2, int num3) {
        return num1 + num2 + num3;
    }
};

int main() {
    // Create an object of the Calculator class
    Calculator calc;
    
    // Call the add functions using the object
    cout << calc.add(40, 50, 60) << endl;  // Calls the add function with three parameters
    cout << calc.add(40, 50) << endl;    // Calls the add function with two parameters

    return 0;
}
