// Last updated: 11/7/2026, 12:55:47 AM
1class Solution {
2public:
3    int m,n;
4    int dp[101][101];
5    int helper(int i,int j,vector<vector<int>>&nums){
6        if(i>m-1 || j>n-1) return 0;
7        if(i==m-1 && j==n-1 ) return 1;
8        if(nums[i][j]==1) return 0;
9
10        if(dp[i][j]!=-1) return dp[i][j];
11        int right=helper(i+1,j,nums);
12        int down=helper(i,j+1,nums);
13        return dp[i][j]=right+down;
14    }
15    int uniquePathsWithObstacles(vector<vector<int>>& nums) {
16        m=nums.size();
17        n=nums[0].size();
18        if(nums[m-1][n-1]==1) return 0;
19        memset(dp,-1,sizeof(dp));
20       // cout<<nums[m-1][n-1];
21        return helper(0,0,nums);
22    }
23};