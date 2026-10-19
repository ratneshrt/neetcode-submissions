class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> ll;
        for(string x: tokens){
            if(x == "+"){
                int top = ll.top();
                ll.pop();
                int sum = ll.top() + top;
                ll.pop();
                ll.push(sum);
            }else if(x == "*"){
                // will write code here
                int top = ll.top();
                ll.pop();
                int sum = top * ll.top();
                ll.pop();
                ll.push(sum);
            }else if(x == "/"){
                int top = ll.top();
                ll.pop();
                int div = ll.top() / top;
                ll.pop();
                ll.push(div);
            }else if(x == "-"){
                //will write here
                int top = ll.top();
                ll.pop();
                int diff = ll.top() - top;
                ll.pop();
                ll.push(diff);
            }else{
                ll.push(stoi(x));
            }
        }

        int res = ll.top();
        return res;
    }
};


