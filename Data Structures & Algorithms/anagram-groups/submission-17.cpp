class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, vector<string>> seen;
        for(string s: strs){
            string key = s;

            sort(key.begin(), key.end());

            seen[key].push_back(s);
        }
        
        for(auto &[key,value]: seen){
            res.push_back(value);
        }

        return res;
    }
};
