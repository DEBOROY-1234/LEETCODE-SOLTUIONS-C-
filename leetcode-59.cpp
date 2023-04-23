class Solution {
private:
    void sum(TreeNode* root, int ans, set<int>& s){
        if(root == NULL) {
            s.insert(ans);
            return;
        };
        int elem = root -> val;
        ans = ans * 10 + elem;

        sum(root -> left, ans, s);
        sum(root -> right, ans, s);
    }

    int sumOne(TreeNode* root, int ans){

        if(root == NULL) return 0;

        int elem = root -> val;
        ans = ans * 2 + elem;

        if(root -> left == NULL && root -> right == NULL){
            return ans;
        }

        int leftSum = sumOne(root -> left, ans);
        int rightSum = sumOne(root -> right, ans);

        return leftSum + rightSum;

    }
 
  
public:
    int sumRootToLeaf(TreeNode* root) {
        // set<int> s;
        // sum(root, 0, s);

        // int ans = 0;

        // for(auto& i: s){
        //     ans += binaryToDecimal(i);
        // }

        // return ans;

        return sumOne(root, 0);
    }
};
