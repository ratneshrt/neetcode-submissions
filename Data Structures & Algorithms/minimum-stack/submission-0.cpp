class MinStack {
    stack<int> ll;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        ll.push(val);
    }
    
    void pop() {
        ll.pop();
    }
    
    int top() {
        return ll.top();
    }
    
    int getMin() {
        int mnele = INT_MAX;
        vector<int> getmn;
        while(!ll.empty()){
            int top = ll.top();
            ll.pop();
            if(mnele > top){
                mnele = top;
            }
            getmn.push_back(top);
        }
        reverse(getmn.begin(), getmn.end());
        for(int x: getmn){
            ll.push(x);
        }
        return mnele;
    }
};
