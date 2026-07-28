// Last updated: 7/28/2026, 9:58:52 PM
class Solution {
public:
int helper(int sr,int sc, int er, int ec,vector<vector<int>>&dp, vector<vector<int>>&arr ){
    if(sr==er && sc==ec) return 1;
    if(arr[er][ec]==1) return 0;
    if(sr>er || sc>ec) return 0;
    if(dp[sr][sc]!=-1) return dp[sr][sc];
    if(arr[sr][sc]==1)  return 0;
    return dp[sr][sc]= helper(sr+1,sc,er,ec,dp,arr)+helper(sr,sc+1,er,ec,dp,arr);
}
    int uniquePathsWithObstacles(vector<vector<int>>& arr) {
        int m= arr.size();
     int n = arr[0].size();
 if (arr[0][0] == 1 || arr[m - 1][n - 1] == 1) return 0;
     
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return helper(0,0,m-1,n-1,dp,arr);
    }
};