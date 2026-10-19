class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int, int>> ll;
        vector<int> res(temperatures.size(), 0);
        for(int i = 0; i< temperatures.size();i++){
            while(!ll.empty() && ll.top().first < temperatures[i]){
                auto ele = ll.top();
                ll.pop();
                res[ele.second] = i - ele.second;
            }
            ll.push({temperatures[i],i});
        }
        return res;
    }
};
