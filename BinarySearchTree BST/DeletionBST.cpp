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

Node* builtBST(vector<int> arr){
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

Node* getInorderSuccessor(Node* root){
    while(root && root->left){
        root = root->left;
    }
    return root;
}

Node* deleteNode(Node* root, int key){
    if(root == NULL) return NULL;

    if(key < root->val){
        root->left = deleteNode(root->left, key);
    }
    else if(key > root->val){
        root->right = deleteNode(root->right, key);
    }
    else{
        // CASE 1 & 2: Combined 0 child and 1 child 
        if(root->left == NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if(root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        else{   // CASE 3: Root have 2 child
            Node* IS_Node = getInorderSuccessor(root->right);   // Leftmost node in the right sub-tree
            root->val = IS_Node->val;
            root->right = deleteNode(root->right, IS_Node->val);
        }
    }

    return root;
}


int main(){
    vector<int> nums = {1,2,3,12,34,56,89,27,69,24,4,5,6,7,8};

    Node* root = builtBST(nums);
    root =  deleteNode(root, 69);

    inorder(root);

    return 0;
}