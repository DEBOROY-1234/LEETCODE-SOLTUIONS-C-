#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isUnivalTree(Node* root) {
        
        if(root == NULL){
            return true;
        }
        
        if(root->left!=NULL && root->left->val!=root->val){
            return false;
        }
        if(root->right!=NULL && root->right->val!=root->val){
            return false;
        }
        
        return isUnivalTree(root->left) && isUnivalTree(root->right);
        
    }
};