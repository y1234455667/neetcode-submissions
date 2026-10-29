class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit = 0;
        int maximum = prices[prices.size() - 1];

        for (int i = prices.size() - 1; i >= 0; i--) {
            maximum = prices[i] > maximum ? prices[i] : maximum;
            int currentprofit = maximum - prices[i];
            maxprofit = currentprofit > maxprofit ? currentprofit : maxprofit;
        }
        return maxprofit;
    }
};
