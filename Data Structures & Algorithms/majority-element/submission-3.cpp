class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        sort(nums.begin(), nums.end());
        for (int i = 0; i< n-1; i++){
            if(nums[i] == nums[i+1]){
                cnt += 1;
                if (cnt == n/2){
                    return nums[i];
                }
            }else{
                cnt = 0;
            }
        }
        return max_element(nums);
    }

    int max_element(vector<int> arr){
        int max_ele = arr[0];
        int n = arr.size();
        for (int i =0; i< n; i++){
            if(max_ele < arr[i]){
                max_ele = arr[i];
            }
        }
        return max_ele;
    }
};