#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node* left;
    Node* right;

    Node(int data){
        val = data;
        left = right = NULL;
    }
};

int idx = -1;
Node* BuildTree(vector<int> preorder){
    idx++;

    if(preorder[idx] == -1){
        return NULL;
    }

    Node* root = new Node(preorder[idx]);
    root->left = BuildTree(preorder);
    root->right = BuildTree(preorder);

    return root;
}

// Pre-order traversal using stack (not recursion)
void preorderUsingStack(Node* root){
    if(root == NULL)
        return;

    stack<Node*> st;
    st.push(root);

    while(!st.empty()){
        Node* topNode = st.top();
        cout << topNode->val << " ";
        st.pop();

        if(topNode->right != NULL) st.push(topNode->right);
        if(topNode->left != NULL) st.push(topNode->left);
    }
}

// In-order traversal using stack (not recursion)
void inorderUsingStack(Node* root){
    if(root == NULL)
        return;

    stack<Node*> st;
    Node* curr = root;

    while (true){
        if(curr != NULL){
            st.push(curr);
            curr = curr->left;
        }
        else{   // curr is null
            if(st.empty()) break;

            curr = st.top();
            st.pop();
            cout << curr->val << " ";

            curr = curr->right;
        }
    }
}

// Post-order traversal using 2 stack (not recursion)
void postorderUsingStack(Node* root){
    if(root == NULL)
        return;

    Node* curr;
    stack<Node*> st1;
    stack<Node*> st2;
    st1.push(root);

    while(!st1.empty()){
        curr = st1.top();
        st1.pop();
        st2.push(curr);

        if(curr->left != NULL) st1.push(curr->left);
        if(curr->right != NULL) st1.push(curr->right);
    }
    
    while(!st2.empty()){
        cout << st2.top()->val << " ";
        st2.pop();
    }
}

// Post-order traversal using 1 stack (not recursion)
void postorderUsingOneStack(Node* root){
    if(root == NULL)
        return;

    stack<Node*> st;
    Node* curr = root;
    Node* temp;

    while (curr != NULL || !st.empty()){
        if(curr != NULL){
            st.push(curr);
            curr = curr->left;
        }
        else{   // curr is null
            temp = st.top()->right;

            if(temp == NULL){
                temp = st.top();
                st.pop();

                cout << temp->val << " ";
                while(!st.empty() && temp == st.top()->right){
                    temp = st.top();
                    st.pop();
                    cout << temp->val << " ";
                }
            }else{
                curr = temp;
            }
        }
    }
}


int main(){
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node* root = BuildTree(preorder);
    postorderUsingOneStack(root);

    return 0;
}