#include <iostream>
#include <vector>
using namespace std;

class solution
{
public:
    int majorityElement(vector<int> &num)
    {
        int frequency = 0, ans = 0;
        int n = num.size();
        
        // Finding the candidate for majority element
        for (int i = 0; i < n; i++)
        {
            if (frequency == 0)
            {
                ans = num[i];
            }
            if (ans == num[i])
            {
                frequency++;
            }
            else
            {
                frequency--;
            }
        }
        
        // Verifying if the candidate is actually the majority element
        int count = 0;
        for (int val : num)
        {
            if (val == ans)
            {
                count++;
            }
        }
        
        // Check if the count is greater than n/2
        if (count > n / 2)
        {
            return ans; // Return the majority element
        }
        else
        {
            return -1; // Return -1 if no majority element exists
        }
    }
};

int main()
{
    solution s;
    vector<int> num = {3, 2, 3};
    cout << s.majorityElement(num) << endl;

    return 0;
}