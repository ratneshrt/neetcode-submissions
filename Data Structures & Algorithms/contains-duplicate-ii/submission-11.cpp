class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        for(int i=0; i < nums.size(); i++){
            int j = i +1;
            while(j<nums.size() && abs(j-i) <= k){
                if(nums[i] == nums[j]){
                    return true;
                }
                j++;
            }
        }
        return false;
    }
};