#include <iostream>

using namespace std;

int main(int argc, char* args[]) {
    if (argc > 1) {
        cout << "hello " << args[1] << endl; // Added a space for better formatting
    } else {
        cout << "hello, no argument provided." << endl; // Handle the case where no argument is given
    }

    return 0;
}