#include <iostream>
using namespace std;

int main()
{
    // This is a valid C-style string because it ends with '\0'
    char str1[] = {'a', 'b', 'c', '\0'};
    cout << "str1 (with null terminator): " << str1 << endl;


    char str2[] = {'a', 'b', 'c'};
    cout << "str2 (without null terminator): " << str2 << endl;             // This may print garbage characters


    cout << "str2[1] = " << str2[1] << endl;


    // Using a string literal automatically adds '\0'   
    char str3[] = "hello";                                       // stored as: {'h','e','l','l','o','\0'}

    cout << "str3 : " << str3 << endl;


    char input[20];
    cout << "Enter a word or sentence: ";
    cin.getline(input, 20);                         // getline reads spaces also and also adds '\0'

    cout << "You entered: " << input << endl;

    

    return 0;
}
