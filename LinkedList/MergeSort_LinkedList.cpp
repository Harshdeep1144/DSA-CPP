#include <bits/stdc++.h>
using namespace std;


class ListNode{
    public: 
        int val;
        ListNode* next;

        ListNode(int data){
            val = data;
            next = NULL;
        }
};

class List{
    ListNode* head;
    ListNode* tail;

    public:
        List(){         // Constructor
            head = tail = NULL;
        }
        
        ListNode* getHead(){    // Getter 
            return head;
        }

        void setHead(ListNode* h){      // Setter
            head = h;
        }

        void push_back(int n){
            ListNode* newNode = new ListNode(n);

            if(head == NULL){
                head = tail = newNode;
                return;
            }

            tail->next = newNode;
            tail = newNode;
        }


        void display(){
            if(head == NULL){
                cout << "NULL! The list is empty" << endl;
                return;
            }

            ListNode* temp = head;
            while(temp){
                cout << temp->val << "->" ;
                temp = temp->next;
            }
            cout << "NULL" << endl;
        }
};

//-------------- Merge Sort ---------------------------


ListNode* merge(ListNode* head1, ListNode* head2){
    if(head1 == NULL) return head2;
    if(head2 == NULL) return head1;

    if(head1->val <= head2->val){
        head1->next = merge(head1->next, head2);
        return head1;
    }else{
        head2->next = merge(head1, head2->next);
        return head2;
    }
}


ListNode* mergeSort(ListNode* head){
    if(head == NULL || head->next == NULL) return head;

    ListNode* slow = head;
    ListNode* fast = head->next;

    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }

    ListNode* right = slow->next;
    slow->next = NULL;

    head = mergeSort(head);
    right = mergeSort(right);

    return merge(head, right);
}



int main(){

    List ll;

    ll.push_back(48);
    ll.push_back(15);
    ll.push_back(20);
    ll.push_back(150);
    ll.push_back(0);

    ll.display();

    ListNode* head = ll.getHead();
    ListNode* newHead = mergeSort(head);
    ll.setHead(newHead);

    ll.display();

    return 0;
}