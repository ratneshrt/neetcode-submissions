class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;
        int left = 0;
        int maxcnt = 0;
        for(int i =0; i< s.length(); i++){
            while(seen.find(s[i]) != seen.end()){
                seen.erase(s[left]);
                left++;
            }

            seen.insert(s[i]);

            int cnt = i- left + 1;

            maxcnt = max(maxcnt, cnt);
        }

        return maxcnt;
    }
};
