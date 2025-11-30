#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int data){ // Constructor
        val = data;
        next = NULL;
    }
};

class List
{
    Node *head;
    Node *tail;

public:
    List(){ // Constructor
        head = tail = NULL;
    }


    void push_front(int val)
    {
        Node *newNode = new Node(val);

        if (head == NULL){
            head = tail = newNode;
            return;
        }

        newNode->next = head;
        head = newNode;
    }


    void push_back(int val)
    {
        Node *newNode = new Node(val);

        if (head == NULL){
            head = tail = newNode;
            return;
        }

        tail->next = newNode;
        tail = newNode;
    }


    void pop_front(){
        if(head == NULL){
            cout << "Can't Pop ! The list is already empty" << endl;
            return;
        }

        Node *temp = head;
        head = head->next;
        temp->next = NULL;

        delete temp;
    }


    void pop_back(){
        if(head == NULL){
            cout << "Can't Pop ! The list is already empty" << endl;
            return;
        }

        Node *temp = head;
        while (temp->next != tail)
        {
            temp = temp->next;
        }

        temp->next = NULL;
        delete tail;
        tail = temp;
    }


    void insert(int val, int pos){
        if(pos < 0){
            cout << "Invalid Position !" << endl;
            return;
        }

        if(pos == 0){
            push_front(val);
            return;
        }

        Node *temp = head;

        for(int i = 0; i < pos - 1; i++){
            if(temp == NULL){
                cout << "Invalid Position !" << endl;           // Position goes out of bound or size of ll.
                return;
            }
            temp = temp->next;
        }

        Node *newNode = new Node(val);

        newNode->next = temp->next;
        temp->next = newNode;
    }


    int search(int val){     
        Node *temp = head;
        int index = 0;

        while (temp != NULL)
        {
            if(temp->val == val){
                return index;
            }

            index++;
            temp = temp->next;
        }
        
        return -1;
    }


    void display()
    {
        if (head == NULL){
            cout << "The list is empty" << endl;
            return;
        }

        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    List ll;

    ll.push_front(5);
    ll.push_front(10);
    ll.push_back(50);
    ll.push_front(100);
    ll.push_back(200);

    ll.display();
    ll.insert(75, 2);
    ll.display();

    ll.pop_front();
    ll.pop_back();

    ll.display();

    cout <<  ll.search(5) << endl;
    cout <<  ll.search(300) << endl;

    return 0;
}