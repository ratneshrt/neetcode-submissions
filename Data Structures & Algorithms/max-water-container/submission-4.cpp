class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0, j = heights.size() - 1;
        int maxwater = 0;
        while(i<j){
            int water = min(heights[i], heights[j]) * (j-i);
            maxwater = max(water, maxwater);
            if(heights[i] > heights[j]){
                j--;
            }
            else{
                i++;
            }
        }
        return maxwater;
    }
};
