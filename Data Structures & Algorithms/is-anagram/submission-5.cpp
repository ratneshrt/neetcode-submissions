class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> seen;
        int n = s.size();
        if (n != t.size()){
            return false;
        }
        for (int i =0; i<n;i++){
            seen[s[i]] += 1;
        }

        for (int i = 0; i< n; i++){
            if (!(seen.find(t[i]) != seen.end()) || seen[t[i]] == 0){
                return false;
            }
            seen[t[i]] -= 1;
        }

        return true;
    }
};
