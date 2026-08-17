class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int initialprice = prices[0];
        int maxprofit = 0;
        for(int price: prices){
            if(initialprice > price){
                initialprice = price;
            }

            int profit = price - initialprice;
            if(profit > maxprofit){
                maxprofit = profit;
            }
        }
        return maxprofit;
    }
};
