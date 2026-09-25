class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxwater = 0;
        int i = 0, j = heights.size()-1;
        while(i< j){
            int water = min(heights[i],heights[j]) * (j-i);
            maxwater = max(maxwater, water);
            if(heights[i] > heights[j]){
                j--;
            }else{
                i++;
            }
        }
        return maxwater;
    }
};
