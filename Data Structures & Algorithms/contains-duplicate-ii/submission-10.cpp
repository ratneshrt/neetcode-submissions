class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        for(int i = 0; i < nums.size(); i++){
            int j = i+1;
            while(j<nums.size()){
                if(nums[i] == nums[j] && abs(i-j) <= k){
                    return true;
                }
                j++;
            }
        }
        return false;
    }
};