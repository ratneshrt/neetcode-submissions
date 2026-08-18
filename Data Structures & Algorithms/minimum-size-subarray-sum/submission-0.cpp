class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int j =0;
        int sum = 0;
        int minlen = INT_MAX;
        for(int i =0;i<nums.size();i++){
            sum += nums[i];
            while(sum>=target){
                sum -= nums[j];
                minlen = min(minlen, i-j+1);
                j++;
            }
        }
        if(minlen == INT_MAX){
            return 0;
        }

        return minlen;
    }
};