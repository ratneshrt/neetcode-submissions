class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> seen;
        for(int x: nums){
            seen.insert(x);
        }

        for(int i=0;i<=nums.size();i++){
            if(seen.find(i+1) == seen.end()){
                return i+1;
            }
        }

        return -1;
    }
};