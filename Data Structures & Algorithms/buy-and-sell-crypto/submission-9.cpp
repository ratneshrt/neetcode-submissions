class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int maxprofit = 0;
        int initialprice = nums[0];
        for(int i=0;i<nums.size();i++){
            if(initialprice > nums[i]){
                initialprice = nums[i];
            }

            int profit = nums[i] - initialprice;
            if(profit > maxprofit){
                maxprofit = profit;
            }
        }

        return maxprofit;
    }
};
