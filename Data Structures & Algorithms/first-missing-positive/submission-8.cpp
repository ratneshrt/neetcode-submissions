class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        if (n == 1){
            if (nums[0] < 0){
                return 1;
            }else{
                if (nums[0] == 1){
                    return nums[0] + 1;
                }else{
                    if (nums[0] == 1){
                        return 2;
                    }else{
                        return 1;
                    }
                }
            }
        }

        unordered_set<int> seen;
        for (int i =0;i<n;i++){
            seen.insert(nums[i]);
        }

        for (int i=1;i<n+1;i++){
            if (!seen.contains(i)){
                return i;
            }
        }

        return *max_element(nums.begin(), nums.end()) + 1;
    }
};