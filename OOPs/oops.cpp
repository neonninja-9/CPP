#include <iostream>
#include <string>
using namespace std;

class person
{
private:
    bool inRelation = 1; // 1 bit

public: // access modifier
    string name;
    string number;

    person(string a, string c)
    {
        string name = a;

        string number = c;
    } // parameterized constructor

    person(const person &obj)
    {
        this->name = obj.name;

        this->number = obj.number;

    } // user define copy constructor
    // destructor -> A destructor has the same name as the class but with a tilde (~)
    ~person()
    {
        cout << "Object is being destroyed" << endl;
    }

    void getinfo()
    {
        cout << "name" << name << endl;
        cout << "number" << number << endl;
    } // methode -> a function which written in a class.
};

int main()
{
    person p1("gourav", "9009925375");
    p1.getinfo();
    return 0;
}