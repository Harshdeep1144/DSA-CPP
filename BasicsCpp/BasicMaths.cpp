#include <iostream>
using namespace std;

int gcd(int a, int b) {
   while(b){
        int r = a % b;
        a = b;
        b = r;
    }

   return a; 
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    int a = 12, b = 18;
    cout << "GCD = " << gcd(a, b) << endl;
    cout << "LCM = " << lcm(a, b) << endl;
}
 