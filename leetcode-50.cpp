        
        /*If you divide some number 2 times, it effectively creates 3 pieces.
Generalization: Dividing N times. creates N+1 pieces.*/
        
        /*The approach goes like this -
We are iterating over the size of bags (which can range upto 10^9)
In each iteration we consider the mid to be the final penalty score that we can get after dividing the bag.
Considering the mid element as penalty score we calculate the number of operations required to reach that score. If the number of operations required to reach the score is more than the maximum operations allowed, then we move the left pointer to the mid + 1 so that we can have penalty score greater than before which can be achieved by less number of operations. Similarly if the number of operations is less than max allowed operations than we can surely select a penalty score which is less than the current score therefore we shift right pointer to the mid in the hope that we will get a lower penalty score.*/
        
class Solution {
public:
	int minimumSize(vector<int>& nums, int maxOperations) {
		int start = 1, end = *max_element(nums.begin(), nums.end());
		int minPenalty = end;
	
		while (start <= end) {
			int penalty = start + (end-start)/2;
			if (isPossible(nums, maxOperations, penalty))
				minPenalty = penalty, end = penalty-1;
			else
				start = penalty+1;
		}

		return minPenalty;
	}

	bool isPossible(vector<int>& nums, int maxOperations, int penalty) {
		int requiredOps = 0;
		for (int n : nums) {
			
			int x = n / penalty;
			
			if (n % penalty == 0) x--;
			requiredOps += x;
		}
		
		return requiredOps <= maxOperations;
	}
};

    