class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        for(int i =0;i<nums.size()-2;i++){
            int j = i+1, k=nums.size()-1;
            if(i>0 && nums[i] == nums[i-1]){
                continue;
            }
            while(j<nums.size() && k>=0 && j<k){
                if(nums[i] + nums[j] + nums[k] > 0){
                    k--;
                }else if(nums[i] + nums[j] + nums[k] < 0){
                    j++;
                }else if (nums[i] + nums[j] + nums[k] == 0){
                    res.push_back({nums[i], nums[j], nums[k]});
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
