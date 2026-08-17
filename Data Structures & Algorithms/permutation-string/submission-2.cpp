class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> s1freq;
        unordered_map<char, int> windowsize;
        for(int i =0;i<s1.size();i++){
            s1freq[s1[i]]++;
        }

        int j=0;
        for(int i =0;i<s2.size();i++){
            windowsize[s2[i]]++;

            if(i-j+1 == s1.length()){
                if(s1freq == windowsize){
                    return true;
                }

                windowsize[s2[j]]--;
                j++;

                if(windowsize[s2[j-1]] == 0){
                    windowsize.erase(s2[j - 1]);
                }
            }
        }

        return false;
    }
};
