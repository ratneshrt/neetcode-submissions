class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> seen;
        int n = s.length();
        int left = 0;
        int maxfreq = 0;
        int ans = 0;

        for(int i =0;i<n;i++){
            seen[s[i]]++;

            maxfreq = max(maxfreq, seen[s[i]]);

            int windowsize = i-left +1;
            int replacement = windowsize - maxfreq;

            while(replacement > k){
                seen[s[left]]--;
                left++;

                windowsize = i-left + 1;
                replacement = windowsize - maxfreq;
            }

            ans = max(ans, i-left+1);
        }

        return ans;
    }
};
