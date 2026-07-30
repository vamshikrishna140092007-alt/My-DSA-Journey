// Problem: LeetCode 238 - Product of Array Except Self
// Link: https://leetcode.com
// Time Complexity: O(N) | Space Complexity: O(1) (excluding output array)
// Core Pattern: Prefix Product + Suffix Product

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        vector<int> ans(size, 1);

        for (int i = 1; i < size; i++) {
            ans[i] = ans[i - 1] * nums[i - 1];
        }

        int suffix = 1;
        for (int i = size - 2; i >= 0; i--) {
            suffix *= nums[i + 1];
            ans[i] *= suffix;
        }

        return ans;
    }
};
