class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;
        int maxcnt = 0;
        int j =0;
        for(int i =0;i<s.length();i++){
            while(seen.find(s[i]) != seen.end()){
                seen.erase(s[j]);
                j++;
            }

            seen.insert(s[i]);

            int cnt = i - j +1;
            maxcnt = max(maxcnt, cnt);
        }

        return maxcnt;
    }
};
