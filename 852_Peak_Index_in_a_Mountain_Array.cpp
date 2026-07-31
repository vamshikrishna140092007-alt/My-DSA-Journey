// Problem: LeetCode 852 - Peak Index in a Mountain Array
// Link: https://leetcode.com
// Time Complexity: O(log N) | Space Complexity: O(1)
// Core Pattern: Binary Search on Peak Element

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 1;
        int end = arr.size() - 2;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1]) {
                return mid;
            }
            else if (arr[mid - 1] < arr[mid]) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        return -1;
    }
};
