// Last updated: 11/2/2026, 10:22:20 PM
1class Solution {
2public:
3    int dp[101][101];
4    int helper(int i,int j,int m,int n){
5        if(i>m-1 || j>n-1) return 0;
6        if(i==m-1 && j==n-1) return 1;
7        if(dp[i][j]!=-1) return dp[i][j];
8        int down=helper(i+1,j,m,n);
9        int right=helper(i,j+1,m,n);
10        return dp[i][j]=down+right;
11    }
12    int uniquePaths(int m, int n) {
13        memset(dp,-1,sizeof(dp));
14        return helper(0,0,m,n);
15    }
16};