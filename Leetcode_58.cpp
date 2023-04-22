class Solution {
public:
    int pivotIndex(vector<int>& nums) 
    {
        int sum=0;
        int comp=0;
        for(int i=0;i<nums.size();i++)
        sum+=nums[i];
        for(int i=0;i<nums.size();i++)
        {
            if(comp==sum-nums[i]-comp)
            return i;
            comp+=nums[i];
        }    
        return -1;
    }
};
