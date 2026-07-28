// Last updated: 7/28/2026, 9:58:51 PM
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,0));
        dp[m-1][n-1]=grid[m-1][n-1];
        for(int i=m-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                int right=INT_MAX;
                int down=INT_MAX;
                if(j<n-1) right=dp[i][j+1];
                if(i<m-1) down=dp[i+1][j];
              if(right==INT_MAX && down==INT_MAX)  continue;
              else dp[i][j]=grid[i][j]+min(right,down);
            }
        }
       return dp[0][0];
    }
};