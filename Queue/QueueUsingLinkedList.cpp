#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node* next;

    Node(int data){
        val = data;
        next = NULL;
    }
};

class Queue{
    Node* head;
    Node* tail;

public:
    Queue(){
        head = tail = NULL;
    }

    void push(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
            return;
        }

        tail->next = newNode;
        tail = newNode;
    }

    void pop(){
        if(head == NULL){
            cout << "Can't pop! The Queue is empty." << endl;
            return;
        }
        
        Node* temp = head;
        head = head->next;
        delete temp;

        if(head == NULL) tail = NULL;
    }

    int front(){
        if(head == NULL){
            cout << "The Queue is empty." << endl;
            return -1;          // Meaningful value indicating empty queue
        }

        return head->val;
    }

    bool empty(){
        return head == NULL;
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