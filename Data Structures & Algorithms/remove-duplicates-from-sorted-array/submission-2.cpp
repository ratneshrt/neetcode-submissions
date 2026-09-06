class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 0;
        for(int i =1;i<nums.size();i++){
            while(j< nums.size() && i<nums.size()){
                if(nums[i] != nums[j]){
                    nums[j+1] = nums[i];
                    j++;
                }
                i++;
            }
        }
        return j+1;
    }
}; 