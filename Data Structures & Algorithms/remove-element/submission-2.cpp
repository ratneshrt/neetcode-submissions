class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> res;
        for(int n: nums){
            if(n != val){
                res.push_back(n);
            }
        }

        for(int i = 0; i< res.size(); i++){
            nums[i] = res[i];
        }

        return res.size();        
    }
};