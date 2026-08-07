class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        int cnt = 0;
        int max_it = 0;
        sort(nums.begin(), nums.end());
        for(int i =0; i< n-1;i++){
            if(nums[i] +1 == nums[i+1]){
                cnt++;
            }

            if(nums[i] == nums[i+1]){
                continue;
            }

            if(nums[i] +1 != nums[i+1]){
                cnt = 0;
            }

            max_it = max(max_it, cnt);
        }

        return max_it +1 ;
    }
};
