class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = nums1.size() - 1, j = 0;
        while(j<nums2.size()){
            nums1[i]  = nums2[j];
            j++;
            i--;
        }

        sort(nums1.begin(), nums1.end());
    }
};