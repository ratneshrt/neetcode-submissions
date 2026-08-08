class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cand1 = 0;
        int cand2 = 0;
        int cnt1 = 0;
        int cnt2 = 0;

        for(int x: nums){
            if(x== cand1){
                cnt1++;
            }else if(x == cand2){
                cnt2++;
            }else if(cnt1 == 0){
                cand1 = x;
                cnt1 = 1;
            }else if(cnt2 == 0){
                cand2 = x;
                cnt2 = 1;
            }else{
                cnt1--;
                cnt2--;
            }
        }

        int count1 = 0;
        int count2 = 0;
        for(int x: nums){
            if(x == cand1){
                count1++;
            }

            if(x == cand2){
                count2++;
            }
        }

        vector<int> res;
        if(count1 > n/3){
            res.push_back(cand1);
        }

        if(count2 > n/3){
            res.push_back(cand2);
        }

        return res;
    }
};