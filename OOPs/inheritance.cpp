#include <iostream>

using namespace std;
class person
{
public:
    string name;
    int age;
    person()
    {
        cout << "parent constructor" << endl;
    }
    ~person()
    {
        cout << "parent distructor" << endl;
    }
};

class student : public person
{
public:
    int rollno;
    student(string name, int age, int rollno)
    {
        cout << "child constructor" << endl;
    }
    ~student()
    {
        cout << "child distructor" << endl;
    }
};

int main()
{
    student s("gourav", 18, 123);

    return 0;
}