class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> ll;
        for(int x: asteroids){
            int curr = x;
            bool isalive = true;
            while(!ll.empty() && ll.top() > 0 && curr < 0){
                if(ll.top() < abs(curr)){
                    ll.pop();
                }else if (ll.top() == abs(curr)){
                    ll.pop();
                    isalive = false;
                    break;
                }else{
                    isalive = false;
                    break;
                }
            }

            if(isalive){
                ll.push(curr);
            }
        }

        vector<int> res;

        while(!ll.empty()){
            int top = ll.top();
            res.push_back(top);
            ll.pop();
        }

        reverse(res.begin(), res.end());

        return res;
    }
};