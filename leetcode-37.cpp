#include<bits/stdc++.h>
using namespace std;




class Solution {
public:
    
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        
        
        //considering both the roots exist
        
        if(root1 && root2){
            
        //adding the root values
        root1->val = root1->val + root2->val;
        
        //adding left root with the left root of the other tree
        
        //recursive of the left and the right roots 
        root1->left = mergeTrees(root1->left,root2->left);
            
        root1->right = mergeTrees(root1->right,root2->right);
        }
        else{
            return root1? root1 : root2;
        }
        return root1;
        
    }
};