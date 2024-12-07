// print all possible subarray of an array using brut force methode
#include <iostream>
using namespace std;
int main()
{
    int arr[9] = {1, 2, -5, 5, 8, -10, 45, 2, -2};
    for (int start = 0; start < 9; start++)
    {
        for (int end = start + 1; end < 9; end++)
        {
            for (int i = start; i < end; i++)
            {
                cout << arr[i] << " ";
            }
            cout << " ";
        }
        cout << "\n";
    }

    return 0;
}