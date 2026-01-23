#include <bits/stdc++.h>
using namespace std;

class Stack{
    list<int> ll;

public:
    void push(int val){
        ll.push_back(val);
    }

    void pop(){
        ll.pop_back();  
    }

    int top(){
        return ll.back();
    }

    bool isempty(){
        ll.size() == 0;
    }
};

int main(){
    Stack st;

    st.push(43);
    st.push(40);
    st.push(35);
    st.push(30);

    cout << "Stack top is: " << st.top() << endl;
    st.pop();
    cout << "Stack top is: " << st.top() << endl;
    
    cout << "The stack elements are: ";
    while(st.isempty()){
        cout << st.top() << " ";
        st.pop();
    }    

    return 0;
}