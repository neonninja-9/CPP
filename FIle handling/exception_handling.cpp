#include <iostream>
#include <stdexcept>
using namespace std;

int main(){
try {
    throw std::out_of_range("Index out of range!");
} catch (const std::exception& e) {
    cout << e.what() << endl;
}
return 0;
}