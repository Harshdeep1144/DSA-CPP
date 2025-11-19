#include <iostream>
using namespace std;

void printName(int i,int n){
    if(i>n)
        return;
    
    cout << "Harsh" << endl;
    printName(i+1, n);
}

void printNum1(int i, int n){
    if(i>n)
        return;
    
    cout << i << " ";
    printNum1(i+1, n);
}

void printNum2(int i, int n){
    if(i<1)
        return;

    cout << i << " ";
    printNum2(i-1, n);
}

void printNum3(int i,int n){
    if(i<1)
        return;

    printNum3(i-1, n);
    cout << i << " ";
}

void UptoNSum1(int n, int sum){
    if(n<1){
        cout << "The sum of is: " << sum;
        return;
    }
    UptoNSum1(n-1,sum+n);
}

int UptoSum2(int n){
    if(n==0)
        return 0;
    
    return n + UptoSum2(n-1);
}

int factorial(int n){
    if(n==1)
        return 1;
    
    return n*factorial(n-1);
}

// void revArr(int l, int r, int arr[]){
//     if(l>r) return;        
    
//     swap(arr[l], arr[r]);
//     revArr(l+1, r-1, arr);
// }  

void revArr(int i, int n, int arr[]){
    if(i>n/2) return;        
    
    swap(arr[i], arr[n-i-1]);
    revArr(i+1, n, arr);
}  


int main(){
    // int n;
    // cout << "Enter the number of times: ";
    // cin >> n;

    // printName(1,n);
    // printNum1(1,n);
    // printNum2(n,n);
    // printNum3(n,n);

    // UptoNSum1(5,0);
    // int sum = UptoSum2(n);
    // cout << "The sum is: " << sum;

    // int fact = factorial(n);
    // cout << "The factorial of " << n << " is: " << fact;


    // int arr[] = {1,2,3,4,5};
    // int size = 5;

    // revArr(0, size, arr);

    // cout << "The reversed arr is: " << endl;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << " ";
    // }


    return 0;
}