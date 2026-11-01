// Last updated: 11/1/2026, 10:57:55 PM
1class Solution {
2public:
3    long long dp[100001][2];
4    long long helper(vector<int>&nums,int i,bool check){
5        if(i>=nums.size()) return 0;
6        if(dp[i][check] != -1) return dp[i][check];
7        long long pick=INT_MIN;
8        if(check)pick =nums[i]+helper(nums,i+1,!check);
9        else  pick=-nums[i]+helper(nums,i+1,!check);
10        long long notpick=helper(nums,i+1,check);
11        return dp[i][check]= max(pick,notpick);
12    }
13    long long maxAlternatingSum(vector<int>& nums) {
14        memset(dp,-1,sizeof(dp));
15        return  helper(nums,0,true);
16        
17    }
18};