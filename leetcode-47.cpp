#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minPairSum(vector<int>& nums) {
     
        sort(nums.begin(),nums.end());
        
        int s = nums.size();
        
        int i=0,j=s-1;
        
        int maxm = -99999999; //asssuming a lower value
        
        while(i<j){
            int sum = nums[i] + nums[j];
            
            maxm = max(maxm,sum);
            
            i++;
            
            j--;
        }
        
        return maxm;
    }
};