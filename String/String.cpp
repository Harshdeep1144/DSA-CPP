#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    // Input a string
    string s;
    cout << "Enter a string: ";
    getline(cin, s);


    cout << "\nOriginal String: " << s << endl;


    // Length of string
    cout << "Length: " << s.length() << endl;


    // Reverse the string
    string rev = s;
    reverse(rev.begin(), rev.end());
    cout << "Reversed: " << rev << endl;


    // Convert to uppercase
    string upper = s;
    for(char &c : upper) c = toupper(c);
    cout << "Uppercase: " << upper << endl;


    // Convert to lowercase
    string lower = s;
    for(char &c : lower) c = tolower(c);
    cout << "Lowercase: " << lower << endl;


    // Substring example
    if(s.length() >= 3)
        cout << "Substring (first 3 chars): " << s.substr(0, 3) << endl;


    // Strings are mutable in cpp
    string str = "hello";
    str[0] = 'H';   // allowed


    return 0;
}
