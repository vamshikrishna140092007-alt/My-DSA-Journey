// Problem: LeetCode 88 - Merge Sorted Array
// Link: https://leetcode.com
// Time Complexity: O(M + N) | Space Complexity: O(1)
// Core Pattern: Two Pointers (Merge from the End)

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int idx = m + n - 1;

        while (i >= 0 && j >= 0) {
            if (nums2[j] >= nums1[i]) {
                nums1[idx--] = nums2[j--];
            }
            else {
                nums1[idx--] = nums1[i--];
            }
        }

        while (j >= 0) {
            nums1[idx--] = nums2[j--];
        }
    }
};
