#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool checkTree(TreeNode* root) {
        
        if(root==NULL){
            return true;
        }
        
        if(root->left->val+root->right->val == root->val){
            return true;
        }
        else{
            return false;
        }
        
    }
};