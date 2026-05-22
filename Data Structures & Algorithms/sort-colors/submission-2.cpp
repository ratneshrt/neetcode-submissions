class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z = 0, o = 0;
        for (int i =0;i<nums.size();i++){
            if (nums[i]==1){
                if (z > o){
                    o =z;
                }
                swap(nums[i], nums[o++]);
            }else if (nums[i] == 0){
                swap(nums[i], nums[z++]);
                if(o!=0){
                    swap(nums[i],nums[o++]);
                }
            }
        }
    }
};