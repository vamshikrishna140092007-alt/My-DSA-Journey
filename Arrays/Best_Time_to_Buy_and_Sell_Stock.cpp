// Problem: LeetCode 121 - Best Time to Buy and Sell Stock
// Link: https://leetcode.com
// Time Complexity: O(N) | Space Complexity: O(1)
// Core Pattern: Single-Loop Min-Tracking and Max-Profit Updating

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int minPrice = 1e9;
        int size = prices.size();
        
        for(int i = 0; i < size; i++){
            minPrice = min(minPrice, prices[i]);
            maxProfit = max(maxProfit, prices[i] - minPrice);
        }
        return maxProfit;
    }
};
