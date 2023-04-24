/*
 * // This is the custom function interface.
 * // You should not implement it, or speculate about its implementation
 * class CustomFunction {
 * public:
 *     // Returns f(x, y) for any given positive integers x and y.
 *     // Note that f(x, y) is increasing with respect to both x and y.
 *     // i.e. f(x, y) < f(x + 1, y), f(x, y) < f(x, y + 1)
 *     int f(int x, int y);
 * };
 */


//we will run the function through two varying integers to count the occurances for which 
//the condition or the function is satisfied 

class Solution {
public:
    vector<vector<int>> findSolution(CustomFunction& customfunction, int z){
        
        vector<vector<int>> res;
        
        // int x=1,y=1000;
        
        for(int i=1;i<=z;i++)
        
            for(int j=1;j<=z;j++)
            
                if(customfunction.f(i,j)==z)
                
                    res.push_back({i,j});
        
        return res;
    }
};
