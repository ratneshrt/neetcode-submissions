class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> score;
        for(string c: operations){
            if(c == "+"){
                int topele = score.top();
                score.pop();
                int secondele = score.top();
                score.push(topele);
                int sum = topele + secondele;
                score.push(sum);
            }else if(c == "C"){
                score.pop();
            }else if(c == "D"){
                int prod = 2 * (score.top());
                score.push(prod);
            }else{
                int ele = stoi(c);
                score.push(ele);
            }
        }

        int totalele = 0;
        while(!score.empty()){
            totalele += score.top();
            score.pop();
        }

        return totalele;
    }
};