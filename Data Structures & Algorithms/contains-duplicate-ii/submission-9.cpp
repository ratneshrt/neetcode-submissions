class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> seen;
        for(int i =0;i<nums.size();i++){
            int j = i+1;
            while(j<nums.size() && abs(j-i) <=k){
                if(nums[j] == nums[i]){
                    return true;
                }
                j++;
            }

            seen.insert(nums[i]);

            if(seen.size() > k){
                seen.erase(nums[j-i]);
            }
        }
        return false;
    }
};