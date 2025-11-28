#include <bits/stdc++.h>
using namespace std;

class D{
    public:
        // Constructor
        D(){
            cout << "Constructor called " << endl;
        }
        // Destructor 
        ~D(){
            cout << "Destructor called " << endl;
        }
};


int main(){

    D d1;       // Constructor called
    int a = 1;
    
    if(a == 1){
        D d2;       // Constructor called 
    }       // Destructor called for d1

}   // Destructor called for d1