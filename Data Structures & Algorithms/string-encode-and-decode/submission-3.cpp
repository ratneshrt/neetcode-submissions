class Solution {
public:

    string encode(vector<string>& strs) {
        string ans = "";
        for(string s: strs){
            ans += to_string(s.length());
            ans += "#";
            ans += s;
        }

        return ans;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int i = 0;
        while(i<s.length()){
            int j = i;
            while(s[j] != '#'){
                j++;
            }
            int length = stoi(s.substr(i,j-i));
            res.push_back(s.substr(j+1, length));
            i = j + 1 + length;
        }

        return res;
    }
};
