#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int> &nums)
{
    int maxSum = 0;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        int currentSum = 0;
        for (int j = i; j < n; j++)
        {
            currentSum += nums[j];
            maxSum = max(currentSum, maxSum);
        }
    }

    return maxSum;
}

int printSubArray(vector<int> &nums)
{
    int n = nums.size();

    // Print all possible subarrays.
    for (int i = 0; i < n; i++) // for start index of subarrays
    {
        for (int j = i; j < n; j++) // for end index  subarrays
        {
            for (int k = i; k <= j; k++) // To print array from start value of subarrays to end
            {
                cout << nums[k];
            }
            cout << " ";
        }
        cout << endl;
    }

}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};

    // printSubArray(nums);

    int max = maxSubArray(nums);
    cout << max;

    return 0;
}