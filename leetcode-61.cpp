#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        
        long n = grades.size();
        
        long l=1,r=2*n;
        
        long m = l + (r-l)/2;
        
        while(l<=r){
            
            if(m*(m+1)==2*n){
                return m;
            }
            else if(m*(m+1)>2*n){
                r = m-1;
            }
            else{
                l=m+1;
            }
            m = l + (r-l)/2;
        }
        return r;
    }
};
