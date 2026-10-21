class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperature) {
        stack<pair<int, int>> ll;
        vector<int> ans(temperature.size(), 0);
        for(int i = 0;i<temperature.size();i++){
            while(!ll.empty() && ll.top().first < temperature[i]){
                auto ele = ll.top();
                ll.pop();
                ans[ele.second] = i - ele.second;
            }
            ll.push({temperature[i],i});
        }
        return ans;
    }
};
