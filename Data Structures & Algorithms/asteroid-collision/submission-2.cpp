class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> clash;
        for(int x: asteroids){
            int curr = x;
            bool isalive = true;

            while(!clash.empty() && clash.top() > 0 && curr < 0){
                if(clash.top() < abs(curr)){
                    clash.pop();
                }else if(clash.top() == abs(curr)){
                    clash.pop();
                    isalive = false;
                    break;
                }else{
                    isalive = false;
                    break;
                }
            }

            if(isalive){
                clash.push(curr);
            }
        }

        vector<int> res;
        while(!clash.empty()){
            res.push_back(clash.top());
            clash.pop();
        }

        reverse(res.begin(), res.end());
        return res;
    }
};