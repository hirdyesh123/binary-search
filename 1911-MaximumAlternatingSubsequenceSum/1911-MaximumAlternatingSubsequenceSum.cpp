// Last updated: 11/1/2026, 10:48:28 PM
1class Solution {
2public:
3    long long helper(vector<int>&nums,int idx,vector<vector<long long>>&dp,bool pos){
4        if(idx>nums.size()-1) return 0;
5        if(dp[idx][pos]!=-1) return dp[idx][pos];
6
7        long long notpick=helper(nums,idx+1,dp,pos);
8        long long val=nums[idx];
9        if(pos==false) val=-val;
10        long long pick=val+helper(nums,idx+1,dp,!pos);
11        return dp[idx][pos]= max(pick,notpick);
12
13    }
14    long long maxAlternatingSum(vector<int>& nums) {
15        int n=nums.size();
16        vector<vector<long long>>dp(n,vector<long long>(2,-1));
17        return helper(nums,0,dp,true);
18    }
19};