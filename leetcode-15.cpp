/*The key observation here is that it's free to move a chip from an even number to another even number, and it is free to move a chip from an odd number to another odd number. It only costs to move an even to an odd, or an odd to an even. Therefore, we want to minimise such moves.

we want to calculate whether it is cheaper to move all the odd chips to even or all the even chips to odd. */

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minCostToMoveChips(vector<int>& p) {
       int even=0,odd=0;
        for(int i=0;i<p.size();i++){
            if(p[i]%2==0) even++;
            else odd++;

        }
        return min(even,odd);
    }
};