// Problem: LeetCode 50 - Pow(x, n)
// Link: https://leetcode.com
// Time Complexity: O(log N) | Space Complexity: O(1)
// Core Pattern: Binary Exponentiation (Divide and Conquer Power Halving)

class Solution {
public:
    double myPow(double x, int n) {
        long long N = n; 
        
        if (N == 0) {
            return 1.0;
        }
        
        if (N < 0) {
            x = 1.0 / x; 
            N = -N;
        }
        
        double ans = 1.0;
        while (N > 0) {
            if (N % 2 == 1) {
                ans *= x;
            }
            x *= x;
            N /= 2;
        }
        return ans;
    }
};
