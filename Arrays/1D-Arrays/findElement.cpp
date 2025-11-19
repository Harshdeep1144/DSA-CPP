#include <iostream>
using namespace std;

int findLargest(int n, int arr[])
{
    int largest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
            largest = arr[i];
    }
    return largest;
}

int findSecLargest(int n, int arr[])
{
    // better approach
    int largest = arr[0], slargest = -1;
    // for (int i = 1; i < n; i++)
    // {
    //     if (arr[i] > largest)
    //         largest = arr[i];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] != largest && arr[i] > slargest )
    //         slargest = arr[i];
    // }

    // optimal solution
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            slargest = largest;
            largest = arr[i]; 
        }
    }

    return slargest;
}

int main()
{
    int nums[] = {5, 2, 6, 3, 4, 2};

    int n = 6;
 
    int largest = findLargest(n, nums);
    cout << "The largest element is: " << largest << endl;

    int slargest = findSecLargest(n, nums);
    cout << "The second largest element is: " << slargest;

    return 0;
}