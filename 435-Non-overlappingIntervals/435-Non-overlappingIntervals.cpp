// Last updated: 8/17/2026, 1:52:27 PM
1class Solution {
2public:
3    bool check(vector<vector<int>>&nums,int i,int j){
4        if(nums[i][1]>nums[j][0]) return true;
5        return false;
6    }
7    int eraseOverlapIntervals(vector<vector<int>>& nums) {
8        sort(nums.begin(),nums.end());
9        int i=0;
10        int j=1;
11        int count=0;
12        while(j<nums.size()){
13            if(check(nums,i,j)){
14               if(nums[j][1]>=nums[i][1]){
15                 j++;
16               }
17               else {
18                i=j;
19                j++;
20               }
21               count++;
22            }
23            else{
24                i=j;
25                j++;
26            }
27        }
28        return count;
29    }
30};