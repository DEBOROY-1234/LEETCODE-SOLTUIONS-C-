class Solution {
public:
    
    
    bool countDays(vector<int>& weights,int days,int mid){
        
        int count=1,sum=0;
        
        for(int i=0;i<weights.size();i++){
            
            sum += weights[i];
            
            if(sum>mid){
                count++;
                sum = weights[i];
            }
        }
        
        if(count <= days){
            return true;
        }
        
        return false;
        
    }
    
    
    int shipWithinDays(vector<int>& weights, int days) {
        
        
        int r = accumulate(begin(weights), end(weights), 0);

         int l = *max_element(begin(weights), end(weights));
        
        while(l<r){
            
            int mid = l + (r-l)/2;
            
            if(countDays(weights,days,mid)){
                r = mid;
            }
            else{
                l = mid +1;
            }
        }
        return l;
    }
};
