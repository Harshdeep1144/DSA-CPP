#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    Node *prev;
    int val;
    Node *next;

    Node(int data){
        val = data;
        prev = NULL;
        next = NULL;
    }
};

class DoublyList
{
public: 
    Node *head = NULL;
    Node *tail = NULL;

    void push_front(int val){
        Node *newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
            return;
        }
        
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }

    void push_back(int val){
        Node *newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
            return;
        }

        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }

    void pop_front(){
        if(head == NULL){
            cout << "Can't pop. The List is empty!" << endl;
            return;
        }

        if(head == tail){
            head = tail = NULL;
            return;
        }

        Node *temp = head;
        head = temp->next;
        
        delete temp;
    }

    void pop_back(){
        if(head == NULL){
            cout << "Can't pop. The List is empty!" << endl;
            return;
        }

        if(head == tail){
            head = tail = NULL;
            return;
        }

        Node *temp = tail;
        tail = temp->prev;
        tail->next = NULL;

        delete temp;
    }

    void display(){
        if(head == NULL){
            cout << "Can't Display. The List is empty!" << endl;
            return;
        }

        Node *temp = head;

        cout << "NULL<--";
        while(temp){
            cout << temp->val;

            if(temp->next != NULL) 
                cout << "<-->";

            temp = temp->next;
        }
        cout << "-->NULL" << endl;
    }

};


int main(){

    DoublyList dll;
    
    dll.push_back(20);
    dll.push_back(25);
    dll.push_front(12);
    dll.push_front(10);
    dll.push_front(8);

    dll.display();

    dll.pop_back();
    dll.pop_front();

    dll.display();

    return 0;
}