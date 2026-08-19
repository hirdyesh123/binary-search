// Last updated: 8/19/2026, 11:58:47 AM
1class Solution {
2public:
3    int maxAbsoluteSum(vector<int>& nums) {
4        int maxsum=0;
5        int sum=0;
6        for(int i=0;i<nums.size();i++){
7            sum=sum+nums[i];
8            nums[i]=nums[i]*-1;
9            maxsum=max(sum,maxsum);
10            if(sum<0) sum=0;
11        }
12       
13        sum=0;
14        for(int i=0;i<nums.size();i++){
15             sum=sum+nums[i];
16            maxsum=max(sum,maxsum);
17            if(sum<0) sum=0;
18        }
19        return maxsum;
20    }
21};