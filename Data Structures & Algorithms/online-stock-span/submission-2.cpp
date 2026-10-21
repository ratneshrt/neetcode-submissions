class StockSpanner {
    stack<pair<int, int>> ll;
public:
    StockSpanner() {
        
    }
    
    int next(int price) {
        int span = 1;
        while(!ll.empty() && ll.top().first <= price){
            span += ll.top().second;
            ll.pop();
        }
        ll.push({price, span});
        return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */