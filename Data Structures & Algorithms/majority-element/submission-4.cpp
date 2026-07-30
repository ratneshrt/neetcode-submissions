class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        sort(nums.begin(), nums.end());
        for (int i = 0; i< n-1; i++){
            if(nums[i] == nums[i+1]){
                cnt += 1;
                if (cnt == n/2){
                    return nums[i];
                }
            }else{
                cnt = 0;
            }
        }
        return nums[n-1];
    }
};