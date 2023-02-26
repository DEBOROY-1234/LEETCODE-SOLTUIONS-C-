class Solution {
public:
    
    /*Here we can observe a pattern to this problem.
		  a  e  i  o  u
    n=1   1  1  1  1  1  /a, e, i, o, u
    n=2   5  4  3  2  1  /a-> aa,ae,ai,ao,au | e-> ee,ei,eo,eu | i-> ii,io,iu |
    o-> oo,ou | u-> uu
    n=3   15 10 6  3  1
If we observe from last there will be only 1 element which will start with u. Every other element will have the count of previous count + next element count. */
    
    //based on observation  
    //Time complexity: O(n).
     int countVowelStrings(int n) {
        
         int a=1, e=1, i=1, o=1, u=1;
        
        while(--n){
            
            o += u;
            
            i += o;
            
            e += i;
            
            a += e;
        }
        
        return a+e+i+o+u;
    }
};