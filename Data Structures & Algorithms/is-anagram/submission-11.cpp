class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        if(n != t.size()){
            return false;
        }
        unordered_map<char, int> seen;
        for(char s_char: s){
            if(seen.find(s_char) != seen.end()){
                seen[s_char]++;
            }else{
                seen[s_char] = 1;
            }
        }

        for(char t_char: t){
            if(seen.find(t_char) == seen.end() || seen[t_char] == 0){
                return false;
            }
            seen[t_char] -=1;
        }
        return true;
    }
};
