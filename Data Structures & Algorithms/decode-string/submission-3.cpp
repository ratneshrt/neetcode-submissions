class Solution {
public:
    string decodeString(string s) {
        stack<string> st;

        for(char c: s){
            if(c != ']'){
                st.push(string(1,c));
            }else{
                string curr = "";

                while(!st.empty() && st.top() != "["){
                    curr = st.top() + curr;
                    st.pop();
                }

                st.pop();

                string num = "";

                while(!st.empty() && !st.top().empty() && isdigit(st.top()[0])){
                    num = st.top() + num;
                    st.pop();
                }

                int k = stoi(num);
                string decode = "";
                while(k--){
                    decode += curr;
                }

                st.push(decode);
            }
        }

        string ans = "";
        while(!st.empty()){
            ans = st.top() + ans;
            st.pop();
        }

        return ans;
    }
};