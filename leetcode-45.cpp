#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        
        vector<int> dup;
        
        int s=arr.size();
        
        for(int i=0;i<s;i++){
            if(arr[i]!=0){
                dup.push_back(arr[i]);
            }
            else if(arr[i]==0){
                dup.push_back(0);
                dup.push_back(0);
            }
        }
        
        for(int i=0;i<s;i++){
            arr[i] = dup[i];
        }
        
    }
};