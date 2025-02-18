#include <iostream>
using namespace std;
int main(void)
{
    int a = 40;
    int *p =  &a;
    cout << "The address of p is " << *(p) << endl;
}