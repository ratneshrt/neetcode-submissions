class Solution {
public:
    int maxArea(vector<int>& heights) {
        // min (i,j) height * length of x (i->j)
        int maxarea = 0;
        int n = heights.size();
        int j = n-1, i=0;
        while(i<j){
            int area = min(heights[i], heights[j]) * (j-i);
            maxarea = max(maxarea, area);
            if(heights[i] > heights[j]){
                j--;
            }else{
                i++;
            }
        }

        return maxarea;
    }
};
