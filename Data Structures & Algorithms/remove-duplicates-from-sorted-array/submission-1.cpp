class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();

        if(n<=1){
            return n;
        }

        int idx = 0;
        for(int i = 0; i< nums.size();i++){
            if(nums[i] != nums[idx]){
                nums[idx+1] = nums[i];
                idx++;
            }
        }

        return idx+1;
    }
};