// Problem: LeetCode 167 - Two Sum II (Input Array Is Sorted)
// Link: https://leetcode.com
// Time Complexity: O(N) | Space Complexity: O(1)
// Core Pattern: Two-Pointer Window Convergence

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int size = numbers.size();
        int L = 0;
        int R = size - 1;

        while (L < R) {
            if (numbers[L] + numbers[R] < target) {
                L++;
            }
            else if (numbers[L] + numbers[R] > target) {
                R--;
            }
            else {
                return {L + 1, R + 1};
            }
        }
        return {};
    }
};
