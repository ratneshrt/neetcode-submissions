class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        if (n == 1){
            return nums;
        }

        int mid = n/2;
        vector<int> left(nums.begin(), nums.begin() + mid);
        vector<int> right(nums.begin() + mid, nums.end());

        vector<int> sortedLeft = sortArray(left);
        vector<int> sortedRight = sortArray(right);

        return merge(sortedLeft, sortedRight);
    }

    vector<int> merge(vector<int> &left, vector<int> &right){
        vector<int> res;
        int i =0, j=0;
        while (i < left.size() && j < right.size()){
            if (left[i] < right[j]){
                res.push_back(left[i]);
                i++;
            }else{
                res.push_back(right[j]);
                j++;
            }
        }
        res.insert(res.end(), left.begin() + i, left.end());
        res.insert(res.end(), right.begin() +j, right.end());
        return res;
    }
};