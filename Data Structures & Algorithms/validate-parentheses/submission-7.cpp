class Solution {
public:
    bool isValid(string s) {
        stack<char> valid;
        unordered_map<char, char> mapp = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };

        for(char c: s){
            if(c == '(' or c == '[' or c == '{'){
                valid.push(c);
            }else{
                if(valid.empty() or valid.top() != mapp[c]){
                    return false;
                }
                valid.pop();
            }
        }

        if(valid.empty()){
            return true;
        }

        return false;
    }
};
