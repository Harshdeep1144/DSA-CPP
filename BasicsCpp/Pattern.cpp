#include <iostream>
using namespace std;

void print1(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        } 
        cout << endl;
    }  
}
void print2(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }   
        cout << endl;
    }   
}
void print3(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    
}
void print4(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
    
}
void print5(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            cout << "*";
        }
        cout << endl;        
    }
    
}
void print6(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i+1; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    
}
void print7(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2*i+1; k++)
        {
            cout << "*";
        }
        for (int j = 0; j < n-i-1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void print8(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2*n-(2*i+1); j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    
}
void print9(int n){
    for (int i = 1; i <= 2*n-1; i++)
    {
        int star = i;
        if (i>n)
        {
            star = 2*n-i;
        }
        
        for (int j = 1; j <= star; j++)
        {
            cout << "*";
        }
        cout << endl;
        
    }
    
}
void print10(int n){
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    
}

int main(){

    // int n;
    // cout << "Enter the no. ";
    // cin >> n;

    print10(5);

    return 0;
}