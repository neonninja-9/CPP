#include <iostream>
#include <string>

using namespace std;

class student
{
private:
    string name;
    string rollno;

public:
    // Constructor
    student(string a, string b)
    {
        name = a;
        rollno = b;
    }

    // Copy Constructor
    student(const student &obj)
    {
        this->name = obj.name;
        this->rollno = obj.rollno;
    } // shallow copy constructor

    // Getter methods
    string getName() const
    {
        return name;
    }

    string getRollNo() const
    {
        return rollno;
    }
};

int main()
{
    student s1("gourav", "A60205224240");
    student s2(s1); // Copy constructor is called

    cout << "Name: " << s2.getName() << endl;
    cout << "Roll No: " << s2.getRollNo()<< endl;

    return 0;
}