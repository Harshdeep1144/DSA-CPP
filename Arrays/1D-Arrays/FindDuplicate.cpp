#include <iostream>
#include <vector>
using namespace std;

// duplicate = (XOR of all array elements) ^ (XOR of numbers from 1 to n)


// a ^ a = 0          Any number XOR itself becomes zero.
// a ^ 0 = a          XOR with zero gives the same number.


int findDuplicate(vector<int> &arr) {
    int n = arr.size() - 1;
    int xor1 = 0, xor2 = 0;

    // XOR of all elements in array
    for (int num : arr) {
        xor1 ^= num;
    }

    // XOR of numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        xor2 ^= i;
    }

    // Duplicate number
    return xor1 ^ xor2;
}

int main() {
    vector<int> nums = {1, 3, 4, 2, 2};

    cout << "Duplicate is: " << findDuplicate(nums);

    return 0;
}
