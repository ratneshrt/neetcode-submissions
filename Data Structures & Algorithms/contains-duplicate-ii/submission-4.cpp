class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> seen;
        int n = nums.size();
        for(int i=0;i<n;i++){
            int j = i+1;
            while(j<n && abs(j-i) <= k){
                if(nums[j] == nums[i]){
                    return true;
                }
                j++;
            }

            seen.erase(nums[j-i]);
        }
        return false;
    }
};
