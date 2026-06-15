#include <bits/stdc++.h>
using namespace std;

class TreeNode{
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int data){
        val = data;
        left = right = NULL;
    }
};

vector<int> getInorder(TreeNode* root){
    vector<int> inorder;
    TreeNode* curr = root;

    while(curr != NULL){
        if(curr->left == NULL){
            inorder.push_back(curr->val);
            curr = curr->right;
        }
        else{
            TreeNode* prev = curr->left;
            while(prev->right && prev->right != curr){
                prev = prev->right;
            }

            if(prev->right == NULL){
                prev->right = curr;
                curr = curr->left;
            }else{
                prev->right = NULL;
                inorder.push_back(curr->val);
                curr = curr->right;
            }
        }
    }

    return inorder;
};

vector<int> getPreorder(TreeNode* root){
    vector<int> preorder;
    TreeNode* curr = root;

    while(curr != NULL){
        if(curr->left == NULL){
            preorder.push_back(curr->val);
            curr = curr->right;
        }
        else{
            TreeNode* prev = curr->left;
            while(prev->right && prev->right != curr){
                prev = prev->right;
            }

            if(prev->right == NULL){
                prev->right = curr;
                preorder.push_back(curr->val);
                curr = curr->left;
            }else{
                prev->right = NULL;
                curr = curr->right;
            }
        }
    }

    return preorder;
};

int main(){
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    vector<int> inorder = getInorder(root);
    vector<int> preorder = getPreorder(root);

    for(int val : inorder) 
        cout << val << " ";
    
    cout << endl;

    for(int val : preorder) 
        cout << val << " ";


    return 0;
}