// find max sum of subarray of an given array using kaden's algorithm
//  kadan's algo ; -"If the current sum becomes negative after including the current element, reset the current sum to the current element. This signifies starting a new subarray at the current index."

#include <iostream>

using namespace std;
int main()
{

    int arr[6] = {1, -8, 9, 5, -7, 9};
    int currentSum = 0;
    int maxSum = INT_MIN;
    for (int i = 0; i < 6; i++)
    {
        currentSum += arr[i];
        maxSum = max(currentSum, maxSum);
        if (currentSum < 0)
        {
            currentSum = 0;
        }
    }
    cout << "maxsum = " << maxSum << "\n";

    return 0;
}