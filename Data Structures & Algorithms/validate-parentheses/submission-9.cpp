class Solution {
public:
    bool isValid(string s) {
        stack<char> val;
        unordered_map<char, char> mapp = {
            {'}', '{'},
            {')', '('},
            {']', '['}
        };

        for(char c: s){
            if(c == '(' or c == '{' or c == '['){
                val.push(c);
            }else{
                if(val.empty() or val.top() != mapp[c]){
                    return false;
                }
                val.pop();
            }
        }

        if(val.empty()){
            return true;
        }

        return false;
    }
};
