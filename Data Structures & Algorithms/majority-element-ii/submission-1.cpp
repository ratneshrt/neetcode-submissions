class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> mapp;
        int n = nums.size();
        for(int x: nums){
            mapp[x]++;
        }

        vector<int> res;
        for(auto &[key, value]: mapp){
            if(value > n/3){
                res.push_back(key);
            }
        }
        return res;
    }
};