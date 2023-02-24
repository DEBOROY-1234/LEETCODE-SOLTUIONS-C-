#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& c) {
       if(c.size()==2) return true;  //two points are always in straight line
       double slope=(double)(c[1][1]-c[0][1])/(c[1][0]-c[0][0]); //calculate slope using first two points
       for(int i=2;i<c.size();i++)
       {
         //check the slope between every point and first point
         double s=(double)(c[i][1]-c[0][1])/(c[i][0]-c[0][0]);
        //if slope is equal then they are in straight line otherwise not
          if(s!=slope) 
          {
            if((c[i][0]-c[0][0])==0 and abs(s)==abs(slope)) return true;  //check for case when denominator is zero
            else return false;
          }
       }
       return true;
    }
};