class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> s1freq;
        unordered_map<char, int> windowfreq;

        for(int i =0;i<s1.length();i++){
            s1freq[s1[i]]++;
        }

        int left = 0;

        for(int right =0;right<s2.length();right++){
            windowfreq[s2[right]]++;

            if(right - left + 1 == s1.length()){
                if(s1freq == windowfreq){
                    return true;
                }

                windowfreq[s2[left]]--;
                left++;

                if (windowfreq[s2[left - 1]] == 0) {
                    windowfreq.erase(s2[left - 1]);
                }
            }
        }

        return false;
    }
};
