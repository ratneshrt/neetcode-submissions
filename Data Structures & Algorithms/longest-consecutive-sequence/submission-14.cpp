class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> mpp;
        for(int x: nums){
            mpp.insert(x);
        }

        int max_it = 0;
        for(int i=0;i<nums.size();i++){
            if(mpp.find(nums[i]-1) != mpp.end()){
                continue;
            }

            int cnt = 1;
            int curr = nums[i];
            while(mpp.find(curr+1) != mpp.end()){
                cnt++;
                curr++;
            }
            max_it = max(max_it, cnt);
        }
        return max_it;
    }
};
