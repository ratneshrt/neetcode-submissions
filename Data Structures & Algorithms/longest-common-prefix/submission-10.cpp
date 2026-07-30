class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];
        int n = strs.size();
        for(int i = 1; i< n; i++){
            int j = 0;
            while (j< strs[i].size() && j < prefix.size() && strs[i][j] == prefix[j]){
                j++;
            }
            prefix = prefix.substr(0,j);
        }
        return prefix;
    }
};