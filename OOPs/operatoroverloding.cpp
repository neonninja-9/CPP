#include <iostream>
using namespace std;

class Complex{
    int real;
    int imag;
    public:
        Complex (): real(0), imag(0){};
        Complex(int r, int i)
        {
            real = r;
            imag = i;
        }
    void show(){
        cout << real << "+" << imag << "i\n";
    }
    Complex operator +(Complex &obj){
        Complex resObj;
        resObj.real = this->real + obj.real;
        resObj.imag = this->imag + obj.imag;
        return resObj;
    }
};
int main(){
    Complex c1(4, 7);
    Complex c2(6, 9);
    c1.show();
    c2.show();
    Complex c3;
    c3 = c1 + c2;
    c3.show();
}