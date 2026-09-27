class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> score;
        for(int i = 0; i<operations.size(); i++){
            if(operations[i] == "+"){
                int topele = score.top();
                score.pop();
                int secondele = score.top();
                score.push(topele);
                int add = topele + secondele;
                score.push(add);
            }else if(operations[i] == "D"){
                int prod = 2 * (score.top());
                score.push(prod);
            }else if(operations[i] == "C"){
                score.pop();
            }else{
                score.push(stoi(operations[i]));
            }
        }

        int sum = 0;

        while(!score.empty()){
            sum += score.top();
            score.pop();
        }
        return sum;
    }
};