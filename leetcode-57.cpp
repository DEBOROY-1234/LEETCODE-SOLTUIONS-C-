

class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums){
        
        int n=nums.size(),maxi=0;
        
        unordered_map<int,int> mp;
        
        for(auto it:nums){
            
            mp[it]++;
        }
        
        for(auto it:mp){
            
            maxi=max(maxi,it.second);
        }
        
        vector<vector<int>> ans(maxi);
        
        for(auto it:mp){
            
            int x=it.second,val=it.first,i=0;
            
            while(x!=0){
                
                ans[i].push_back(val);
                
                x--;
                
                i++;
            }
        }
        
        return ans;
    }
};
