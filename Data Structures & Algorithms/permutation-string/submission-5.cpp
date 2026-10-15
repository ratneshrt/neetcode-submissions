class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> s1freq;
        unordered_map<char, int> ws;
        int j = 0;
        for(int i=0; i< s1.size(); i++){
            s1freq[s1[i]]++;
        }

        for(int i = 0;i<s2.size();i++){
            ws[s2[i]]++;

            if(i - j +1 == s1.size()){
                if(ws == s1freq){
                    return true;
                }

                ws[s2[j]]--;
                j++;

                if(ws[s2[j-1]] == 0){
                    ws.erase(s2[j-1]);
                }
            }
        }

        return false;
    }
};
