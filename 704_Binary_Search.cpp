// Problem: LeetCode 704 - Binary Search
// Link: https://leetcode.com
// Time Complexity: O(log N) | Space Complexity: O(1)
// Core Pattern: Binary Search

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] < target) {
                start = mid + 1;
            }
            else if (nums[mid] > target) {
                end = mid - 1;
            }
            else {
                return mid;
            }
        }

        return -1;
    }
};
