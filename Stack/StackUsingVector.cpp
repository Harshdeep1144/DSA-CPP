#include <bits/stdc++.h>
using namespace std;

class Stack{
    vector<int> st;

public:
    void push(int val){
        st.push_back(val);
    }

    void pop(){
        st.pop_back();
    }

    int top(){
        return st.back();
    }

    bool empty(){
        return st.size() == 0;
    }
};

int main(){
    Stack st;

    st.push(23);
    st.push(21);
    st.push(10);

    cout << "Top: " << st.top() << endl;
    if(st.empty()) 
        cout << "Stack is empty";
    else
         cout << "The stack elements are: ";

    
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}