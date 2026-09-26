class Solution {
public:
    int characterReplacement(string s, int k) {
        int j = 0, mxcnt = 0, mxfreq = 0;
        unordered_map<char, int> mpp;
        for(int i = 0; i< s.size(); i++){
            mpp[s[i]]++;

            mxfreq = max(mxfreq, mpp[s[i]]);

            int windowsize = i - j +1;
            int replacement = windowsize - mxfreq;

            while(replacement > k){
                mpp[s[j]]--;
                j++;

                windowsize = i - j+1;
                replacement = windowsize - mxfreq;
            }

            mxcnt = max(mxcnt,windowsize);
        }
        return mxcnt;
    }
};
