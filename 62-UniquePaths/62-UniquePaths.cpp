// Last updated: 7/28/2026, 9:58:54 PM
class Solution {
public:
    int helper(int m,int n,int m1,int n1,vector<vector<int>>&dp){
        if(m1>m-1 || n1>n-1) return 0 ;
        if(m1==m-1 && n1==n-1) return dp[m1][n1]=1;
        if(dp[m1][n1]!=-1) return dp[m1][n1];
        return dp[m1][n1]=helper(m,n,m1+1,n1,dp)+helper(m,n,m1,n1+1,dp);
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,-1));
        helper(m,n,0,0,dp);
        return dp[0][0];
        
    }
};