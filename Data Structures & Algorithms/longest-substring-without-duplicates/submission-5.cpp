class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int mxcnt = 0, left = 0;
        unordered_set<char> seen;
        for(int i = 0; i< s.size(); i++){
            while(seen.find(s[i]) != seen.end()){
                seen.erase(s[left]);
                left++;
            }

            int cnt = i - left + 1;
            mxcnt = max(mxcnt, cnt);
            seen.insert(s[i]);
        }

        return mxcnt;
    }
};
