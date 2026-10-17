class MyQueue {
    stack<int> s1;
    stack<int> s2;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        while(!s1.empty()){
            int s1top = s1.top();
            s2.push(s1top);
            s1.pop();
        }
        int element2pop = s2.top();
        s2.pop();
        while(!s2.empty()){
            int s2top = s2.top();
            s2.pop();
            s1.push(s2top);
        }
        return element2pop;
    }
    
    int peek() {
        while(!s1.empty()){
            int s1top = s1.top();
            s2.push(s1top);
            s1.pop();
        }
        int element2pop = s2.top();
        while(!s2.empty()){
            int s2top = s2.top();
            s2.pop();
            s1.push(s2top);
        }
        return element2pop;
    }
    
    bool empty() {
        if(!s1.empty()){
            return false;
        }
        return true;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */