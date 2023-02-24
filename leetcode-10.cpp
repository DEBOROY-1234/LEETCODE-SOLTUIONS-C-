class Solution {
public:
    int minOperations(int n) {
        
        //by complete pattern observation for varies entries, its a linear progrssion 
        //and shows triangular sum property.
        int res = 0;
        
        int lim = n/2;
        int mid;
        if(n%2==0)
        {
            mid = 2*lim;
            res++;
        }
        else
        {
            mid = 2*lim+1;
        }
        for(int i=0;i<=lim;i++)
        {
            res+=(mid-(2*i+1));
            
        }
        return res;
    }
};
