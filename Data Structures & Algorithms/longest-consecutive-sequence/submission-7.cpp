class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> seen;
        for(int x: nums){
            seen.insert(x);
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
                cnt++;
            }
            max_it = max(max_it, cnt);
        }
        return max_it;
    }
};
