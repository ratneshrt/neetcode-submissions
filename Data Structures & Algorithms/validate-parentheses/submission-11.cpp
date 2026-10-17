class Solution {
public:
    bool isValid(string s) {
        stack<char> ll;
        map<char, char> mpp = {
            {'}', '{'},
            {')', '('},
            {']', '['}
        };

        for(char c: s){
            if(c == '(' or c == '{' or c == '['){
                ll.push(c);
            }else{
                if(ll.empty() or ll.top() != mpp[c]){
                    return false;
                }
                ll.pop();
            }
        }

        if(ll.empty()){
            return true;
        }

        return false;
    }
};
