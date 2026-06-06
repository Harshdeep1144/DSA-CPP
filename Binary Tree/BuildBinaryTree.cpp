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

void preorderTraversal(Node* root){
    if(root == NULL)
        return;

    cout << root->val << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}


int main(){
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node* root = BuildTree(preorder);
    preorderTraversal(root);

    return 0;
}