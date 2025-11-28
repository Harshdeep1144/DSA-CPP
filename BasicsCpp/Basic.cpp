#include <bits/stdc++.h>
using namespace std;

// Method overloading
int addNums(int a, int b){
    return a + b;
}

int addNums(int a, int b, int c){
    return a + b + c;
}

// Swap using pointers
void swap(int *ptr1, int *ptr2){
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}


int main(){

    cout << "Sum: " << addNums(4, 5) << endl;
    cout << "Sum: " << addNums(4, 5, 6) << endl;

    int a = 5, b = 10;

    swap(&a, &b);
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    return 0;
}
