class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int initialprice = prices[0];
        for(int i =1;i<prices.size();i++){
            if(initialprice > prices[i]){
                initialprice = prices[i];
            }

            int profit = prices[i] - initialprice;
            if(profit > maxProfit){
                maxProfit = profit;
            }
        }
        return maxProfit;
    }
};
