// Last updated: 8/16/2026, 1:12:28 PM
1class Solution {
2public:
3    int maxScoreSightseeingPair(vector<int>& nums) {
4        int maxi=nums[0];
5        int ans=INT_MIN;
6        for(int i=1;i<nums.size();i++){
7            int temp=nums[i]-i;
8            ans=max(ans,maxi+temp);
9            maxi=max(maxi,nums[i]+i);
10        }
11        return ans;
12    }
13};