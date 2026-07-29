// Problem: LeetCode 11 - Container With Most Water
// Link: https://leetcode.com
// Time Complexity: O(N) | Space Complexity: O(1)
// Core Pattern: Two-Pointer Greedy (Move the Smaller Height)

class Solution {
public:
    int maxArea(vector<int>& height) {

        int maxWater = 0;
        int L = 0;
        int R = height.size() - 1;

        while (L < R) {
            int h = min(height[L], height[R]);
            int width = R - L;
            int area = h * width;

            maxWater = max(maxWater, area);

            height[L] < height[R] ? L++ : R--;
        }

        return maxWater;
    }
};
