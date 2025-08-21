#include <iostream>
using namespace std;
class Base{
    public:
    Base(){
        cout << "Base constructor\n";
    }
    virtual ~Base(){
        cout << "Base destructor\n";
    }
};
class Derived : public Base{
    public:
    Derived(){
        cout << "Derived constructor\n";
    }
    ~Derived(){
        cout << "Derived destructor\n";
    }
};
int main() {
    Base *b = new Derived(); // Create a Derived object but reference it as Base
    delete b; // This will cause undefined behavior
    // because the destructor of Derived will not be called
    // if Base destructor is not virtual
    // To fix this, we should declare the destructor of Base as virtual
    // virtual ~Base() {
    //     cout << "Base destructor\n";
    // }
    // }
    

    return 0;
}