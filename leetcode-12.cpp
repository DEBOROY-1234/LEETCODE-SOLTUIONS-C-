class Solution {

public:

    /*we are doing the same activity again and again i.e. deleting every kth element we encounter. Therefore, we can think towards the recursive approach also.*/
    /*If I have the winner for 'n-1' and 'k'. I can find the winner for 'n' and 'k' by moving on to the next kth person (i.e. f(n) = f(n-1)+k). */
    
    
    int findTheWinner(int n, int k) {

        int ans = 0;

        for (int i = 1; i <= n; i++) ans = (ans + k) % i;

        return ans + 1;

    }

};
   