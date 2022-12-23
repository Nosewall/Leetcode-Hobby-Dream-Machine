class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        if (len < 2) return 0;
        vector<int> buy(len), sell(len), rest(len);
        buy[0] = -prices[0];
        sell[0] = 0;
        rest[0] = 0;
        for(int i = 1; i < len; i++){
            buy[i] = max(buy[i-1], rest[i-1] - prices[i]);
            sell[i] = max(sell[i-1] , buy[i-1] + prices[i]);
            rest[i] = max(rest[i-1], sell[i-1]);
        }
        return max(rest[len-1], sell[len - 1]);

    }
};