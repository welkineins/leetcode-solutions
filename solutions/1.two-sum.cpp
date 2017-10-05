class Solution {
public:
	// we don't known wether the number will be repeat, so use O(n^2) algo,
	// otherwise, using hash to lookup second number is faster.
    vector<int> twoSum(vector<int>& nums, int target) {
    	int size = nums.size();

    	for (size_t i = 0; i < size; ++i) {
    		for (size_t j = i + 1; j < size; ++j) {
    			// use substraction to avoid wraparound
    			if ((target - nums[i]) == nums[j]) {
    				return {i, j};
    			}
    		}
    	}

    	return {}; // should not reach
	}
};
