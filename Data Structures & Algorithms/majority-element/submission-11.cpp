class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=0, cand;
        for(int x:nums){
            if(cnt ==0){
                cand = x;
            }

            if(cand == x){
                cnt++;
            }else{
                cnt--;
            }
        }

        return cand;
    }
};