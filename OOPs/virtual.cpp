#include <iostream>
using namespace std;

class Base
{
public:
    virtual void show()
    {
        cout << "Base class show function/n";
    }
};
class derived : public Base
{
public:
    void show()
    {
        cout << "Derived class show function/n";
    }
};
int main()
{
    Base *b1;//base class' pointer
    derived d1;
    b1 = &d1;//pointing to derived's object
    b1->show(); // derived's show() will call at runtime
}