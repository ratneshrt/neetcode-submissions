class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> seen;

        int left = 0;
        int maxFreq = 0;
        int ans = 0;

        for (int right = 0; right < s.length(); right++) {
            seen[s[right]]++;

            maxFreq = max(maxFreq, seen[s[right]]);


            int windowSize = right - left + 1;
            int replacements = windowSize - maxFreq;

            while (replacements > k) {
                seen[s[left]]--;
                left++;

                windowSize = right - left + 1;
                replacements = windowSize - maxFreq;
            }

            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};