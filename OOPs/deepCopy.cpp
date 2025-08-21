#include <iostream>
#include <string>

using namespace std;
class Parent
{
public:
    string prop1;
    string prop2;
    string *prop3;

    // prameterized constructor
    Parent(string prop1, string prop2, string prop3)
    {
        this->prop1 = prop1;
        this->prop2 = prop2;
        this->prop3 = new string(prop3);
    }

    // deep copy constructor
    Parent(const Parent &obj)
    {
        prop1 = obj.prop1;
        prop2 = obj.prop2;
        prop3 = new string;
        *prop3 = *obj.prop3;
    }

    // setter
    void setProps(string prop1, string prpp2)
    {
        this->prop1 = prop1;
        this->prop2 = prop2;
    }
    // getter
    void getProp()
    {
        cout << "Prop 1 :" << prop1;
        cout << "Prop 1 :" << prop2;
    }

    ~Parent()
    {
        if (prop3 != NULL)
        {
            delete prop3;
            prop3 = NULL;
        }
    }
};

class anotherChild; // forward declearartion
class Child : public Parent
{
    int prop4; // private property
public:
    Child(string prop1, string prop2, string prop3, int prop4)
        : Parent(prop1, prop2, prop3)
    {
        this->prop4 = prop4;
    }
    friend class anotherChild;
};

class anotherChild
{
public:
    void getProp(Child obj)
    {
        cout << "Prop 4 :" << obj.prop4; // accessing private member
    }
};

int main()
{
    Child obj("Prop1", "Prop2", "Prop3", 10);
    anotherChild obj1;
    obj1.getProp(obj);

    return 0;
}