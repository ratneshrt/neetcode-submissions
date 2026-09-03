class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> seen;
        for(int x: nums){
            seen[x]++;
        }

        vector<vector<int>> bucket(nums.size() + 1);
        for(auto& it: seen){
            int i = it.first;
            int freq = it.second;
            bucket[freq].push_back(i);
        }

        vector<int> res;
        for(int i = bucket.size()-1;i>=0;i--){
            for (int x: bucket[i]){
                res.push_back(x);
                if(res.size() == k){
                    return res;
                }
            }
        }

        return res;
    }
};
