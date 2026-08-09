class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1 = word1.length();
        int n2 = word2.length();
        string s = "";
        int j = 0;
        for(int i =0; i<min(n1,n2); i++){
            s += word1[i];
            s+=word2[i];
            j++;
        }

        if(n1 > n2){
            s.append(word1.begin() + j, word1.end());
        }else if(n1 < n2){
            s.append(word2.begin()+j, word2.end());
        }
        return s;
    }
};