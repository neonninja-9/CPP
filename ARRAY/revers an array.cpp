#include <iostream>
using namespace std;
void reverse(int arr[],int size)
{
    // using two pointer approch
    int start = 0, end = size - 1;
    while (start < end)
    {
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }
    
}
int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    
    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<< " ";
    }
    reverse(arr, size);
    cout << "\nafter reverse\n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
