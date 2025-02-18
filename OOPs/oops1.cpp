#include <iostream>
#include <string>
using namespace std;

class person
{
private:
    bool inRelation; // Boolean field to indicate relationship status

public:
    string name;
    string *address;
    string number;

    // Parameterized Constructor
    person(string a, string b, string c)
    {
        this->name = a;
        this->address = new string(b);
        this->number = c;
    }

    // Copy Constructor
    person(person &obj)
    {
        this->name = obj.name;
        this->address = new string(*obj.address); // Deep copy
        this->number = obj.number;
    }

    // Destructor
    ~person()
    {
        delete address; // Free dynamically allocated memory
        cout << "Object is being destroyed" << endl;
    }

    // Method to display information
    void getinfo()
    {
        cout << "Name: " << name << endl;
        cout << "Address: " << *address << endl;
        cout << "Number: " << number << endl;
    }
};

int main()
{
    person p1("Gourav", "Morar", "9009925375");
    p1.getinfo();

    // Demonstrating copy constructor
    person p2 = p1; // Invokes copy constructor
    
    p2.getinfo();

    return 0;
}
