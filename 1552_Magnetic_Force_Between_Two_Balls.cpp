// Problem: LeetCode 1552 - Magnetic Force Between Two Balls
// Link: https://leetcode.com
// Time Complexity: O(N log D) | Space Complexity: O(1)
// Core Pattern: Binary Search on Answer

class Solution {
public:
    bool isValid(vector<int>& position, int mid, int m) {
        int cows = 1;
        int place = position[0];
        int n = position.size();

        for (int i = 1; i < n; i++) {
            if (position[i] - place >= mid) {
                cows++;
                place = position[i];
            }

            if (cows >= m) {
                return true;
            }
        }

        return false;
    }

    int maxDistance(vector<int>& position, int m) {
        int n = position.size();
        int ans = -1;

        sort(position.begin(), position.end());

        int start = 1;
        int end = position[n - 1] - position[0];

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (isValid(position, mid, m)) {
                ans = mid;
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        return ans;
    }
};
