class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeroRegion = 0, oneRegion = 0;
        for (int i =0;i<nums.size();i++){
            if (nums[i]==1){
                if (zeroRegion > oneRegion){
                    oneRegion =zeroRegion;
                }
                swap(nums[i], nums[oneRegion++]);
            }else if (nums[i] == 0){
                swap(nums[i], nums[zeroRegion++]);
                if(oneRegion!=0){
                    swap(nums[i],nums[oneRegion++]);
                }
            }
        }
    }
};