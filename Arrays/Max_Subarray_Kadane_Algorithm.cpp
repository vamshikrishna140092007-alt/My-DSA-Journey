// Problem: LeetCode 53 - Maximum Subarray
// Link: https://leetcode.com
// Time Complexity: O(N) | Space Complexity: O(1)
// Core Pattern: Kadane's Algorithm (Reset running sum if < 0)

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentsum = 0;
        int maxsubarraysum = -1e9;
        int size = nums.size();
        
        for(int i = 0; i < size; i++){
            currentsum += nums[i];
            maxsubarraysum = max(maxsubarraysum, currentsum);
            if(currentsum < 0){
                currentsum = 0;
            }
        }
        return maxsubarraysum;
    }
};
