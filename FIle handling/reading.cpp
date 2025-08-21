#include<iostream>
#include<fstream>
using namespace std;
int main() {
    ifstream File("sample.txt");
    if (!File) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    string line;
    while (getline(File, line)) {
        cout << line << endl;
    }

    File.close();
    return 0;
}