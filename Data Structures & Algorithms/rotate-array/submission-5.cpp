class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int y = k %n;

        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() +y);
        reverse(nums.begin()+y, nums.end());
    }
};