class Solution {
public:
    int characterReplacement(string s, int k) {
        int j = 0;
        int maxcnt = 0;
        int maxfreq = 0;
        unordered_map<char, int> seen;
        for(int i=0;i<s.length();i++){
            seen[s[i]]++;

            maxfreq = max(maxfreq, seen[s[i]]);

            int windowsize = i-j+1;
            int replacement = windowsize - maxfreq;

            while(replacement > k){
                seen[s[j]]--;
                j++;

                windowsize = i-j+1;
                replacement = windowsize - maxfreq;
            }

            maxcnt = max(maxcnt, i-j+1);
        }
        return maxcnt;
    }
};
