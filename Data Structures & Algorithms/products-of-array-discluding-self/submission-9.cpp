class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size());
        int prod = 1;
        int ifzero = 0;
        for(int x: nums){
            if(x == 0){
                ifzero++;
            }else{
                prod = prod*x;
            }
        }

        for(int i =0;i<nums.size();i++){
            if(ifzero > 1){
                res[i]=0;
            }else if(ifzero == 1){
                if(nums[i] != 0){
                    res[i] = 0;
                }else{
                    res[i] = prod;
                }
            }else{
                res[i] = prod/nums[i];
            }
        }

        return res;
    }
};
