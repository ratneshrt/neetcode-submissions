class Solution {
public:
    int maxProfit(vector<int>& price) {
        int profit = 0;
        for(int i = 0; i < price.size()-1; i++){
            if(price[i]<price[i+1]){
                profit += price[i+1] - price[i];
            }
        }
        return profit;
    }
};