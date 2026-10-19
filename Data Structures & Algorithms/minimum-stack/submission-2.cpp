class MinStack {
    stack<int> ll;
    stack<int> mnstack;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        ll.push(val);

        if(mnstack.empty() || mnstack.top() >= val){
            mnstack.push(val);
        }
    }
    
    void pop() {
        if(ll.top() == mnstack.top()){
            mnstack.pop();
        }
        ll.pop();
    }
    
    int top() {
        return ll.top();
    }
    
    int getMin() {
        return mnstack.top();
    }
};
