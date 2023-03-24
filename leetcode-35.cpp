#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        
        TreeNode* temp;
        if(root==NULL)
        return root;
        temp=root->left;

        root->left=invertTree(root->right);
        root->right=invertTree(temp);

        return root;
        
    }
};