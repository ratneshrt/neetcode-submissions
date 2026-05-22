class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        vector<int> temp(nums.size());
        mergeSort(nums, temp, 0, nums.size() - 1);
        return nums;
    }

private:
    void mergeSort(vector<int>& nums, vector<int>& temp, int start, int end) {
        if (start >= end) return;

        int mid = start + (end - start) / 2;

    
        mergeSort(nums, temp, start, mid);
        mergeSort(nums, temp, mid + 1, end);

        merge(nums, temp, start, mid, end);
    }

    void merge(vector<int>& nums, vector<int>& temp, int start, int mid, int end) {
        int i = start;      
        int j = mid + 1;    
        int k = start;      

        while (i <= mid && j <= end) {
            if (nums[i] <= nums[j]) {
                temp[k++] = nums[i++];
            } else {
                temp[k++] = nums[j++];
            }
        }


        while (i <= mid) temp[k++] = nums[i++];
        while (j <= end) temp[k++] = nums[j++];

        for (int p = start; p <= end; p++) {
            nums[p] = temp[p];
        }
    }
};
