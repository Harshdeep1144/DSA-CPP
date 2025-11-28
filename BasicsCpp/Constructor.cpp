#include <bits/stdc++.h>
using namespace std;

class student{
    int roll_no;
    string name;
    double fee;

    public:
        student(int, string, double);       // Parameterized constructor
    
        student(student &s){        // copy constructor
            roll_no = s.roll_no;
            name = s.name;
            fee = s.fee;
            
            cout << "Copy Constructor Called: " << endl;
        }

        // Function to display student details
        void display();
};

// Implementation of the parameterized constructor
student::student(int r, string n, double f){
    roll_no = r;
    name = n;
    fee = f;
}

void student::display(){
    cout << roll_no << " " << name << " " << fee << endl;
}


int main(){
    // Create student object with parameterized constructor
    student s(9004, "Harsh", 10000);
    s.display();

    // Create another student object using the copy constructor
    student harsh(s);
    harsh.display();


    return 0;
}