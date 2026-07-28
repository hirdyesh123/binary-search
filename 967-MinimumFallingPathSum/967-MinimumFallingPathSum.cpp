// Last updated: 7/28/2026, 9:56:21 PM
class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& nums) {
        int m=nums.size();
        vector<vector<int>>dp(m,vector<int>(m,1e9));
        for(int i=0;i<m;i++){
            dp[m-1][i]=nums[m-1][i];
        }
        for(int i=m-2;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                int left=1e9;
                int right=1e9;
                int same=dp[i+1][j];
              if(j>0)  left=dp[i+1][j-1];
               if(j<m-1)  right=dp[i+1][j+1];
                dp[i][j]=nums[i][j]+min({same,left,right});
            }
        }
        int ans=INT_MAX;
        for(int i=0;i<m;i++){
           ans=min(ans,dp[0][i]);
        }
        return ans;
    }
};