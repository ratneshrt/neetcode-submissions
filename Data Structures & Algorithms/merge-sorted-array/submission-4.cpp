class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> res;
        vector<int> nums;
        for(int i =0;i<m;i++){
            nums.push_back(nums1[i]);
        }
        res = mergearr(nums,nums2);

        for(int i=0;i<m+n;i++){
            nums1[i] = res[i];
        }
    }

    vector<int> mergearr(vector<int>& nums1, vector<int>& nums2){
        int i=0,j=0;
        vector<int> res;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i] <= nums2[j]){
                res.push_back(nums1[i]);
                i++;
            }else{
                res.push_back(nums2[j]);
                j++;
            }
        }

        res.insert(res.end(), nums1.begin() + i, nums1.end());
        res.insert(res.end(), nums2.begin() + j, nums2.end());

        return res;
    }
};