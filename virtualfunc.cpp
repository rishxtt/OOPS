#include <iostream>
using namespace std;
class Base
{
public:
    virtual void show()
    {
        cout << "Base Class Function Called" << endl;
    }
};

class Derived : public Base
{
public:
    void show() override
    {
        cout << "Derived Class Function Called" << endl;
    }
};
int main()
{
    Base *baseptr;
    Derived obj;
    baseptr = &obj;
    baseptr->show();

    return 0;
}