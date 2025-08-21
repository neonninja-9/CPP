#include <iostream>
using namespace std;

class Exm{
    public:
        virtual void fnx() = 0;//abstrct class mmust have at least on pure virtual fnx
};

class child : public Exm{
    public:
    void fnx(){
        cout << "hey i am a function\n";
    }
};

int main()
{
    //Exm e1;  abstract class can't be instantiated
    child c1;
    c1.fnx();

    return 0;
}