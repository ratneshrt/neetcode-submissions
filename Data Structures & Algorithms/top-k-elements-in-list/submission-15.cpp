class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        for(int x: nums){
            mpp[x]++;
        }

        vector<vector<int>> bucket(nums.size() + 1);
        for(auto &it: mpp){
            int freq = it.second;
            int num = it.first;
            bucket[freq].push_back(num);
        }

        vector<int> res;
        for(int i = bucket.size() - 1; i >= 0; i--){
            for(int x: bucket[i]){
                res.push_back(x);
                if (res.size() == k){
                    return res;
                }
            }
        }

        return res;
    }
};
