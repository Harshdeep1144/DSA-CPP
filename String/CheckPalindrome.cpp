#include <bits/stdc++.h>
using namespace std;

// To convert upper case string to lower case
char toLowerCase(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';         // e.g [B -> b]         B(66) - 65 + 97 == 98 (b)         
        return temp;
    }
}

bool checkPlaindrome(char str[], int n){          // Using while loop (Two pointer Approach)
    int l = 0;
    int r = n - 1;

    while(l <= r){
        if(toLowerCase (str[l])!=toLowerCase (str[r])){
            return false;
        }
        else{
            l++;
            r--;
        }
    }

    return true;
}

int main()
{
    int n;
    cout << "Enter length: ";
    cin >> n;

    char arr[n + 1]; // Declaring character array with space for null-terminator i.e '\0'
    cout << "Enter word: ";
    cin >> arr;

    bool isPalindrome = true; // Flag to indicate palindrome status
    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] != arr[n - i - 1])
        {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
        cout << "Yes, the string is a palindrome";
    else
        cout << "No, the string is not a palindrome";

    return 0;
}