#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> minOperations(string s) {
        
        int N=s.size();
        int left=0,right=0;
        int sum=0;
        
      for (int i = 0; i < N; ++i) {
            if (s[i] == '1') sum += i, ++right;
        }
        vector<int> ans(s.size());
        
        for(int i = 0;i<s.size();++i){
            
             ans[i] = sum;
            /* ans[i]=sum; //on the right movement the first element will be having the greatest sum initially */            
           if (s[i] == '1') --right, ++left;
            sum += left - right;
        }
        return ans;
        
    }
};