class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int mxcnt = 0;
        int left = 0;
        unordered_set<int> seen;
        for(int i =0;i<s.size();i++){
            while(seen.find(s[i]) != seen.end()){
                seen.erase(s[left]);
                left++;
            }

            seen.insert(s[i]);
            int cnt = i - left + 1;
            mxcnt = max(mxcnt, cnt);
        }

        return mxcnt;
    }
};
