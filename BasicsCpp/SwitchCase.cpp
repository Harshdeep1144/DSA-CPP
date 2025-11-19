#include <iostream>
using namespace std;

int main()
{
    char input = 'B';

    switch (input)
    {
    case 'A':
        cout << "GLBITM" << endl;
        break;

    case 'B':
        cout << "GL Bajaj" << endl;
        break;

    default:
        cout << "Input Input " << endl;
        break;
    }

    

    return 0;
}