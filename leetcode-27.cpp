#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    //function to find the maximum height of a BT
    int maxDepth(TreeNode* root) {
        //base case
        
        if(root==NULL){
            return 0;
        }
        int left = maxDepth(root->left);
        int right = maxDepth(root->right);
        return max(left,right)+1;
        
    }
};