// Last updated: 8/30/2026, 10:34:24 PM
1class Solution {
2public:
3    int minimumDeletions(vector<int>& nums) {
4        int minidx=-1;
5        int maxidx=-1;
6        int minval=INT_MAX;
7        int maxval=INT_MIN;
8
9        for(int i=0;i<nums.size();i++){
10            if(nums[i]>maxval){
11                maxval=nums[i];
12                maxidx=i;
13            }
14            if(nums[i]<minval){
15                minval=nums[i];
16                minidx=i;
17            }
18        }
19       int left=max(minidx,maxidx)+1;
20       int right=nums.size()-min(minidx,maxidx);
21       int both=min(minidx,maxidx)+1+nums.size()- max(minidx,maxidx);
22       return min({left,right,both});
23    }
24};