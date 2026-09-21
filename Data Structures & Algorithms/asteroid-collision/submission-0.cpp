class Solution {
public:
    vector<int> asteroidCollision(vector<int>& nums) {
        stack<int> cpp;
        for(int x: nums){
            int curr =x;
            bool alive = true;

            while(!cpp.empty() && cpp.top() > 0 && curr <0){
                int top = cpp.top();

                if(cpp.top() < abs(curr)){
                    cpp.pop();
                }else if(cpp.top() == abs(curr)){
                    cpp.pop();
                    alive = false;
                    break;
                }else{
                    alive = false;
                    break;
                }
            }

            if(alive){
                cpp.push(curr);
            }

        }

        vector<int> res;
        while(!cpp.empty()){
            int top1 = cpp.top();
            res.push_back(top1);
            cpp.pop();
        }

        reverse(res.begin(), res.end());

        return res;
    }
};