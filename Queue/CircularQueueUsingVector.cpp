#include <bits/stdc++.h>
using namespace std;

class CircularQueue{
    vector<int> cq;
    int f, r, currSize, capacity;

public:
    CircularQueue(int cap){
        capacity = cap;
        cq.resize(capacity);
        currSize = 0;
        f = 0;
        r = -1;
    }

    bool empty(){
        return currSize == 0;
    }

    bool full(){
        return currSize == capacity;
    }

    void push(int val){
        if(full()){
            cout << "The circular queue is full" << endl;
            return;
        }

        r = (r + 1) % capacity;
        cq[r] = val;
        currSize++;        
    }

    void pop(){
        if(empty()){
            cout << "The circular queue is empty" << endl;
            return;
        }

        f = (f + 1) % capacity;
        currSize--;
    }

    int front(){
        if(empty()){
            cout << "The circular queue is empty" << endl;
            return -1;
        }

        return cq[f];
    }
};

int main() {
    CircularQueue cq(5);

    cq.push(12);
    cq.push(17);
    cq.pop();
    cq.pop();
    cq.push(48);
    cq.push(90);

    while (!cq.empty()) {
        cout << cq.front() << " ";
        cq.pop();
    }

    return 0;
}
