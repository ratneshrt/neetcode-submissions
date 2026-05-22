class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size();
        int m = text2.size();

        vector<vector<int>> dp;

        for (int i=0;i<n+1;i++){
            vector<int> row;
            for (int j =0; j< m+1;j++){
                row.push_back(0);
            }
            dp.push_back(row);
        }

        for (int i =n-1;i>=0;i--){
            for (int j=m-1;j>=0;j--){
                if (text1[i] == text2[j]){
                    dp[i][j] = 1+ dp[i+1][j+1];
                }else{
                    dp[i][j] = max(dp[i+1][j], dp[i][j+1]);
                }
            }
        }

        return dp[0][0];
    }
};
