#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    string* address; // Pointer to dynamically allocated memory for address

    Person(string n, string addr) {
        name = n;
        address = new string(addr); // Dynamically allocate memory for address
    }

    // Deep copy constructor
    Person(const Person& obj) {
        name = obj.name;
        address = new string(*obj.address); // Creating a new copy of the address
    }

    ~Person() {
        delete address; // Clean up memory
    }
};

int main() {
    Person p1("Alice", "Wonderland");
    Person p2 = p1; // Deep copy

    // Changing the address in p1 will NOT affect p2
    *p1.address = "New Wonderland";

    cout << "p1 address: " << *p1.address << endl; // Outputs: New Wonderland
    cout << "p2 address: " << *p2.address << endl; // Outputs: Wonderland

    return 0;
}