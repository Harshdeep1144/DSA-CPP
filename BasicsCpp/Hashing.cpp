#include <iostream>
#include <map>
using namespace std;

void IntFrequency(int n, int arr[])
{
    int hash[n] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }

    int num;
    cout << "Enter the no. to search: " << endl;
    cin >> num;

    cout << num << " appears " << hash[num] << " times " << endl;
}

void CharFrequency(string s)
{
    int hashStr[26] = {0}; // for all char use 256

    for (int i = 0; i < s.size(); i++)
    {
        hashStr[s[i] - 'a'] += 1; // for all char use s[i]
    }

    char ch;
    cout << "Enter the char: ";
    cin >> ch;

    cout << ch << " appears " << hashStr[ch - 'a'] /*for all char use ch*/ << " times " << endl;
}

void FrequencyMap(int n, int arr[])
{
    map<int, int> mpp;      // map<char, int> mpp;

    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;      // ex: mpp[3] = mpp[3] + 1;
    }

    int num;
    cout << "Enter the number: ";
    cin >> num;

    cout << "The frequency of " << num << " is " << mpp[num];
}

int main()
{
    int n;
    cout << "Size of array: ";
    cin >> n;
    int arr[n];

    cout << "Enter the elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // IntFrequency(n, arr);

    // now to find number of same char in a string
    // string s;
    // cout << "Enter the string: ";
    // cin >> s;

    // CharFrequency(s);

    // frequency using map
    FrequencyMap(n, arr);

    return 0;
}