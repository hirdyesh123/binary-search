// Last updated: 8/19/2026, 11:58:25 AM
1class Solution {
2public:
3    int maxAbsoluteSum(vector<int>& nums) {
4        int maxsum=0;
5        int sum=0;
6        for(int i=0;i<nums.size();i++){
7            sum=sum+nums[i];
8            maxsum=max(sum,maxsum);
9            if(sum<0) sum=0;
10        }
11        for(int i=0;i<nums.size();i++){
12            nums[i]=nums[i]*-1;
13        }
14        sum=0;
15        for(int i=0;i<nums.size();i++){
16             sum=sum+nums[i];
17            maxsum=max(sum,maxsum);
18            if(sum<0) sum=0;
19        }
20        return maxsum;
21    }
22};