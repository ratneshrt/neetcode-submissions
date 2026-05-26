class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int cnt = 0;
        for (int i=0;i<n;i++){
            int j = i;
            int currsum = 0;
            while (j<n){
                currsum += nums[j];
                if (currsum == k){
                    cnt++;
                }
                j++;
            }
        }
        return cnt;
    }
};