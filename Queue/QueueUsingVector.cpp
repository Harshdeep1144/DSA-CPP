#include <bits/stdc++.h>
using namespace std;

class Queue{
public:
    vector<int> q;

    void push(int val){
        q.push_back(val);
    }

    void pop(){
        if(!q.empty())
            q.erase(q.begin());
    }

    int front(){
        return q.front();
    }

    bool empty(){
        return q.empty();
    }
};

int main(){
    Queue q;

    q.push(54);
    q.push(66);
    q.push(74);
    q.pop();
    q.push(90);
    
    cout << "The queue elements are: ";
    while (!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    
    return 0;
}