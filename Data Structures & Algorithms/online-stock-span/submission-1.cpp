class StockSpanner {
    vector<int> ans;
public:
    StockSpanner() {
        
    }
    
    int next(int price) {
        ans.push_back(price);
        int i = ans.size() - 2;
        while(i>= 0 && ans[i] <= price){
            i--;
        }
        return ans.size() - i - 1;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */