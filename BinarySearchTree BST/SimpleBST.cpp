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

Node* insert(Node* root, int val){
    if(root == NULL){
        return new Node(val);
    }
    
    if(val < root->val){
        root->left = insert(root->left, val);
    }
    if(val > root->val){
        root->right = insert(root->right, val);
    }

    return root;
}

Node *buildBST(vector<int> arr){
    Node* root = NULL;

    for(int val : arr){
        root = insert(root, val);
    }

    return root;
}

void inorder(Node* root){
    if(root == NULL) return;

    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

int main(){
    vector<int> arr = {4,7,3,9,5,6};

    Node* root = buildBST(arr);
    inorder(root);

    return 0;
}