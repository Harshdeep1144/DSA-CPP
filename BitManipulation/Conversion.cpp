#include <iostream>
#include <cmath>

using namespace std;

int DecimalToBinary(int n)
{

    int ans = 0, pow = 1;
    while (n)
    {
        int rem = n % 2;
        ans += rem * pow;
        n /= 2;
        pow *= 10;
    }

    return ans;
}

int BinaryToDecimal(int binNum)
{
    int ans = 0, pow = 1;
    while (binNum)
    {
        int bit = binNum % 10;
        ans += bit * pow;
        binNum /= 10;
        pow *= 2;
    }

    return ans;
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int ans1 = DecimalToBinary(n);
    cout << "The binary of " << n << " is " << ans1 << endl;


    
    int binNum;
    cout << "Enter the binary number: ";
    cin >> binNum;

    int ans2 = BinaryToDecimal(binNum);
    cout << "The decimal of " << n << " is " << ans2 << endl;

    return 0;
}
