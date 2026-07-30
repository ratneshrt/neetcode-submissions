class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        int n = nums.size();
        for(int x: nums){
            mp[x]++;
            if(mp[x] > n/2){
                return x;
            }
        }
        return max_ele(nums);
    }

    int max_ele(vector<int> nums){
        int max_element = nums[0];
        for(int x: nums){
            if(x > max_element){
                max_element = x;
            }
        }
        return max_element;
    }
};