class StockSpanner {
    vector<int> res;
public:
    StockSpanner() {}
    
    int next(int price) {
        res.push_back(price);
        int i = res.size() - 2;
        while(i >= 0 && res[i] <= price){
            i--;
        }
        return res.size() - i -1;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */