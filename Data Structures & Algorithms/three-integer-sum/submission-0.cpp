class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int target = 0;
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        int n = nums.size();
        for(int i =0; i<n; i++){
            int j = i+1, k = n-1;
            if(i>0 && nums[i] == nums[i-1]){
                continue;
            }
            while(j<n && k >= 0 && j<k){

                if(nums[i] + nums[j] + nums[k] > target){
                    k--;
                }else if(nums[i] + nums[j] + nums[k] < target){
                    j++;
                }else if(nums[i] + nums[j] + nums[k] == target){
                    res.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;

                    while(j<k && nums[j] == nums[j-1]){
                        j++;
                    }

                    while(j<k && nums[k] == nums[k+1]){
                        k--;
                    }
                }
            }
        }
        return res;
    }
};
