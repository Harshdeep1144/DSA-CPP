#include <iostream>
using namespace std;

int main()
{
    int a = 3, b = 5;
    bool res;

    // Relational Operator
    res = (a == b);
    cout << "3 == 5 is: " << res << endl;

    res = (a != b);
    cout << "3 != 5 is: " << res << endl;

    res = (a > b);
    cout << "3 > 5 is: " << res << endl;

    res = (a < b);
    cout << "3 < 5 is: " << res << endl;

    res = (a >= b);
    cout << "3 >= 5 is: " << res << endl;

    res = (a <= b);
    cout << "3 <= 5 is: " << res << endl;

    // Ternary / Conditional operator
    int num1 = 10, num2 = 40, max;

    max = (num1 > num2) ? num1 : num2;
    cout << "Max is : " << max << endl;


    // Bitwise Operator
    a = 5 , b = 3;

    int bitwise_and = a & b;
    int bitwise_or = a | b;
    int bitwise_xor = a ^ b;
    int bitwise_not = ~a;
    int left_shift = a << 2;
    int right_shift = a >> 1;

    cout << "AND: " << bitwise_and << endl;
    cout << "OR: " << bitwise_or << endl;
    cout << "XOR: " << bitwise_xor << endl;
    cout << "NOT: " << bitwise_not << endl;
    cout << "LEFT SHIFT: " << left_shift << endl;
    cout << "RIGHT SHIFT: " << right_shift << endl;


    return 0;
}