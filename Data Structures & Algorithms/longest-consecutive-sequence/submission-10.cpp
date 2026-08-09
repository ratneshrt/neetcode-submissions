class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> seen;
        for(int x: nums){
            seen.insert(x);
        }

        int max_it = 0;
        for(int i =0; i<nums.size(); i++){
            if(seen.find(nums[i] - 1) != seen.end()){
                continue;
            }
            int cnt = 1;
            int curr = nums[i];
            while(seen.find(curr+1) != seen.end()){
                cnt++;
                curr++;
            }

            max_it = max(max_it, cnt);
        }

        return max_it;
    }
};
