// Problem: LeetCode 410 - Split Array Largest Sum
// Link: https://leetcode.com
// Time Complexity: O(N log S) | Space Complexity: O(1)
// Core Pattern: Binary Search on Answer

class Solution {
public:
    bool isValid(vector<int>& nums, int n, int k, int mid) {
        int students = 1;
        int pages = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] > mid) {
                return false;
            }

            if (pages + nums[i] <= mid) {
                pages += nums[i];
            }
            else {
                students++;
                pages = nums[i];
            }
        }

        return students <= k;
    }

    int splitArray(vector<int>& nums, int k) {
        int sum = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            sum += nums[i];
        }

        int start = *max_element(nums.begin(), nums.end());
        int end = sum;
        int ans = -1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (isValid(nums, n, k, mid)) {
                ans = mid;
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }

        return ans;
    }
};
