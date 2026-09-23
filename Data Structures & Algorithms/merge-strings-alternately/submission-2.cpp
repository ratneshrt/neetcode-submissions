class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1 = word1.size(), n2 = word2.size();
        string s = "";
        int j =0;
        for(int i = 0;i<min(n1,n2);i++){
            s += word1[i];
            s+=word2[j];
            j++;
        }

        if(n1 > n2){
            s.append(word1.begin() + j, word1.end());
        }

        if(n1 < n2){
            s.append(word2.begin() + j, word2.end());
        }

        return s;
    }
};