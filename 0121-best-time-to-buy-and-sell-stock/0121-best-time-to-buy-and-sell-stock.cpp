class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy_prices = prices[0];
        int profit = 0;

        int n = prices.size();

        for(int i = 1 ; i < n ; i++){
            if(buy_prices > prices[i]){

                buy_prices = prices[i];
            }

            profit = max(profit, prices[i] - buy_prices);
        }
        
        return profit;
    }
};