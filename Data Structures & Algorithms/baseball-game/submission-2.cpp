class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> res;
        for(int i=0;i<operations.size();i++){
            if(operations[i] == "+"){
                int topElement = res.top();
                res.pop();
                int secondElement = res.top();
                res.push(topElement);
                int add = topElement + secondElement;
                res.push(add);
            }else if(operations[i] == "C"){
                res.pop();
            }else if(operations[i] == "D"){
                int prod = 2*(res.top());
                res.push(prod);
            }else{
                res.push(stoi(operations[i]));
            }
        }
        int i = getStackSum(res);
        return i;
    }
    
    int getStackSum(stack<int>& res){
        int sum = 0;
        while(!res.empty()){
            sum += res.top();
            res.pop();
        }
        return sum;
    }
};