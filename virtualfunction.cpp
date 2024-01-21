#include <iostream>
using namespace std;

class Base
{
public:
    virtual void show()
    {
        cout << "Base class" << endl;
    }
};
class Derived : public Base
{
public:
    void show() override
    {
        cout << "Derived class" << endl;
    }
};
int main()
{
    Base *basePtr;
    Derived derived;
    basePtr = &derived;
    basePtr->show(); // Calls Derived's show()
    return 0;
}
