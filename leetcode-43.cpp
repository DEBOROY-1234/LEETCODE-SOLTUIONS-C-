
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    TreeNode* required;

    void findNode(TreeNode* cloned , TreeNode* target){
        if(cloned==NULL){
            return;
        }
        if(cloned->val==target->val){
            required=cloned;
        }
        findNode(cloned->left , target);
        findNode(cloned->right , target);
    }

    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {

        findNode(cloned , target);
        return required;

    }
};