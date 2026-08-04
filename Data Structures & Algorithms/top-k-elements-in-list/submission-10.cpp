class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mapp;
        for(int x: nums){
            mapp[x]++;
        }

        vector<vector<int>> bucket(nums.size() + 1);
        for(auto &entry: mapp){
            int num = entry.first;
            int freq = entry.second;
            bucket[freq].push_back(num);
        }

        vector<int> ans;
        for(int i = bucket.size()-1; i >= 0; i--){
            for(int x: bucket[i]){
                ans.push_back(x);
                if(ans.size() == k){
                    return ans;
                }
            }
        }
    }
};

