class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int i =0;
        while(i<nums.size()){
            int j = i+1;
            while(j<nums.size() && abs(j-i) <= k){
                if(nums[i] == nums[j]){
                    return true;
                }
                j++;
            }
            i++;
        }
        return false;
    }
};
