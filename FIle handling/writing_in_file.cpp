#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream File("sample.txt");
    File << "Hello, World!" << endl;

    return 0;
}