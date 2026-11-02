// Last updated: 11/2/2026, 9:32:47 PM
1class Solution {
2public:
3    int dp[2501][2501];
4    int helper(vector<int>&nums,int previdx,int idx){
5        if(idx>=nums.size()) return 0;
6        if(previdx!=-1 && dp[previdx][idx]!=-1) return dp[previdx][idx];
7        int pick=0;
8        if(previdx==-1 || nums[idx]>nums[previdx]) pick=1+helper(nums,idx,idx+1);
9        int notpick=helper(nums,previdx,idx+1);
10        if(previdx==-1) return max(pick,notpick);
11        return dp[previdx][idx]=max(pick,notpick);
12    }
13    int lengthOfLIS(vector<int>& nums) {
14       memset(dp,-1,sizeof(dp));
15       return helper(nums,-1,0);
16    }
17};