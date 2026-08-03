// Last updated: 8/3/2026, 11:39:11 AM
1class Solution {
2public:
3    int minSubArrayLen(int target, vector<int>& nums) {
4        int ans=INT_MAX;
5        int i=0;
6        int j=0;
7        int sum=0;
8        while(j<nums.size()){
9            sum=sum+nums[j];
10            if(sum>=target) ans=min(ans,j-i+1);
11            while(sum>=target){
12                ans=min(ans,j-i+1);
13                sum=sum-nums[i];
14                i++;
15            }
16            j++;
17        }
18        if(ans==INT_MAX) return 0;
19        return ans;
20    }
21};