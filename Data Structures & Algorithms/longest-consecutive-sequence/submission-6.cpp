class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> seen;
        int n = nums.size();
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        for(int i = 0; i<n; i++){
            seen.insert(nums[i]);
        }

        int max_it = 0;
        for(int x: nums){
            if(seen.find(x-1) != seen.end()){
                continue;
            }
            int cnt = 1;
            int current = x;
            while(seen.find(current + 1) != seen.end()){
                current = current + 1;
                cnt = cnt+1;
            }
            max_it = max(max_it, cnt);
        }
        return max_it;
    }
};
