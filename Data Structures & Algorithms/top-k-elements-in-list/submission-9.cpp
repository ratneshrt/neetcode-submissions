class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mapp;
        for(int x: nums){
            mapp[x]++;
        }

        // bucket arr --> basically sorted according to occurence
        vector<vector<int>> bucket(nums.size() + 1);

        for(auto &entry: mapp){
            int num = entry.first;
            int count = entry.second;
            bucket[count].push_back(num);
        }

        vector<int> ans;

        for(int i = bucket.size()-1;i>=0;i--){
            for(int x: bucket[i]){
                ans.push_back(x);
                if(ans.size() == k){
                    return ans;
                }
            }
        }

        return ans;
    }
};
