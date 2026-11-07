class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = *max_element(piles.begin(), piles.end());
        while(low<=high){
            int mid = low + (high - low) / 2;
            long long time = calculateTime(piles, mid);

            if(time > h){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
        return low;
    }

    long long calculateTime(vector<int>& piles, int speed){
        long long hour = 0;
        for(int x: piles){
            hour += (x + speed - 1LL) / speed;
        }
        return hour;
    }
};
