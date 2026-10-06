class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice = prices[0];
        int profit = 0;
        for(int i = 1; i<prices.size(); i++){
            if(prices[i] < minprice){
                minprice = prices[i];
            }

            int sum = prices[i] - minprice;
            profit = max(profit, sum);
        }

        return profit;
    }
};
