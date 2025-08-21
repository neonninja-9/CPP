#include <iostream>
using namespace std;
class Complex{
    public:
        int real;
        int imag;
        Complex(int r, int i){
            real = r;
            imag = i;
        }
        // Overloading the + operator
        Complex operator+(Complex const &obj){
            Complex res(0, 0);
            res.real = real + obj.real;
            res.imag = imag + obj.imag;
            return res;
        }
        // Overloading the << operator
        friend ostream& operator<<(ostream &out, Complex const &obj);
        // Overloading the >> operator
        friend istream& operator>>(istream &in, Complex &obj);
};
ostream& operator<<(ostream &out, Complex const &obj){
    out << obj.real << " + " << obj.imag << "i";
    return out;
}
istream& operator>>(istream &in, Complex &obj){
    cout << "Enter real and imaginary parts: ";
    in >> obj.real >> obj.imag;
    return in;

} 
int main()
{
    Complex c1(3, 4);
    Complex c2(1, 2);
    Complex c3 = c1 + c2; // Using overloaded + operator
    cout << "Sum: " << c3 << endl; // Using overloaded << operator
    Complex c4(0, 0);
    cin >> c4; // Using overloaded >> operator
    cout << "Input: " << c4 << endl; // Using overloaded << operator
    // Using overloaded + operator
    Complex c5 = c1 + c4;
    cout << "Sum: " << c5 << endl; // Using overloaded << operator
    // Using overloaded >> operator
    Complex c6(0, 0);
    cin >> c6; // Using overloaded >> operator

    return 0;
}