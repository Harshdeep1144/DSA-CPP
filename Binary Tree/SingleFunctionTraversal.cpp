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

// All traversal in single function i.e preorder, inorder, postorder
// pre ---> 1
// in ---> 2
// post ---> 3
void traversal(Node* root, vector<int> &pre, vector<int> &in, vector<int> &post){
    if(root == NULL) return;
    stack<pair<Node*, int>> st;
    st.push({root, 1});

    while(!st.empty()){
        auto it = st.top();
        st.pop();

        // Increment 1 to 2
        if(it.second == 1){         
            pre.push_back(it.first->val);
            it.second++;
            st.push(it);

            if(it.first->left != NULL) 
                st.push({it.first->left, 1});
        }
        // Increment 2 to 3
        else if(it.second == 2){
            in.push_back(it.first->val);
            it.second++;
            st.push(it);

            if(it.first->right != NULL)
                st.push({it.first->right, 1});
        }
        // Dont't push it back again
        else{   
            post.push_back(it.first->val);
        }
    }
}


int main(){
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node* root = BuildTree(preorder);

    vector<int> pre, in, post;
    traversal(root, pre, in, post);
    cout << "All the Traversal of given binary tree are : " << endl;

    for(int val : pre) cout << val << " ";
    cout << endl;

    for(int val : in) cout << val << " ";
    cout << endl;

    for(int val : post) cout << val << " ";
    cout << endl;

    return 0;
}