class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> mpp = {
            {'}', '{'},
            {')', '('},
            {']', '['}
        };
        stack<char> val;
        for(char x: s){
            if(x == '(' || x == '{' || x == '['){
                val.push(x);
            }else{
                if(val.empty() || val.top() != mpp[x]){
                    return false;
                }
                val.pop();
            }
        }
        if(!val.empty()){
            return false;
        }
        return true;
    }
};
