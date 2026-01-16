#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int data){
        val = data;
        next = NULL;
    }
};

class CircularList
{   
    Node *head = NULL;
    Node *tail = NULL;

public:
    void push_front(int val){
        Node *newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
            tail->next = head;
            return;
        }

        newNode->next = head;
        tail->next = newNode;
        head = newNode;
    }

    void push_back(int val){
        Node *newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
            tail->next = head;
            return;
        }

        tail->next = newNode;
        tail = newNode;
        tail->next = head;
    }

    void pop_front(){
        if(head == NULL){
            cout << "Can't pop. List is empty!" << endl;
            return;
        }

        if(head == tail){
            head = tail = NULL;
            return;
        }

        Node *temp = head;
        tail->next = temp->next;
        head = temp->next;

        delete temp;
    }

    void pop_back(){
        if(head == NULL){
            cout << "Can't pop. List is empty!" << endl;
            return;
        }

        if(head == tail){
            head = tail = NULL;
            return;
        }

        Node *temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }

        temp->next = head;
        delete tail;
        tail = temp;
                
    }

    void display(){
        if(head == NULL){
            cout << "Can't display. List is empty!" << endl;
            return;
        }

        Node *temp = head;
        while(temp->next != head){
            cout << temp->val << "-->";
            temp = temp->next;
        }
        cout << temp->val << "-->head" << endl;   
    }
};



int main(){

    CircularList cl;
    
    cl.push_back(20);
    cl.push_back(45);
    cl.push_back(25);
    cl.push_front(12);
    cl.push_front(11);
    cl.push_front(8);

    cl.display();

    cl.pop_back();
    cl.pop_front();

    cl.display();

    return 0;
}