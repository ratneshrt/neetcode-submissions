class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int j = 0, sum = 0, mnlen = INT_MAX;
        for(int i = 0;i<nums.size();i++){
            sum += nums[i];
            while(sum >= target){
                sum -= nums[j];
                mnlen = min(mnlen, i - j+1);
                j++;
            }
        }

        if (mnlen == INT_MAX){
            return 0;
        }

        return mnlen;
    }
};