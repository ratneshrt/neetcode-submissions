class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        if(n==1){
            return nums;
        }

        int mid = n/2;
        vector<int> left(nums.begin(), nums.begin()+mid);
        vector<int> right(nums.begin()+mid,nums.end());

        vector<int> sortedleft = sortArray(left);
        vector<int> sortedright = sortArray(right);

        return merge(sortedleft,sortedright);
    }

    vector<int> merge(vector<int>& left, vector<int>& right){
        int i=0, j=0;
        vector<int> res;
        while(i<left.size() && j<right.size()){
            if(left[i] > right[j]){
                res.push_back(right[j]);
                j++;
            }else{
                res.push_back(left[i]);
                i++;
            }
        }

        res.insert(res.end(),left.begin() +i,left.end());
        res.insert(res.end(),right.begin() +j,right.end());

        return res;
    }
};