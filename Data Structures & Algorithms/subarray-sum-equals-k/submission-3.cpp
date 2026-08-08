class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cnt = 0;
        for(int i = 0; i<nums.size();i++){
            int j = i;
            int currsum = 0;
            while(j<nums.size()){
                currsum += nums[j];
                if(currsum == k){
                    cnt++;
                }
                j++;
            }
        }

        return cnt;
    }
};