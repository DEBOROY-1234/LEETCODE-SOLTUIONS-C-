#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
     
        
        vector<int> pos;
        vector<int> neg;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                pos.push_back(nums[i]);
            }
        }
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                neg.push_back(nums[i]);
            }
        }
        
        vector<int> res;
        
        for(int i=0;i<pos.size();i++){
                res.push_back(pos[i]);
                res.push_back(neg[i]);
            }
        
        return res;
        
    }
};