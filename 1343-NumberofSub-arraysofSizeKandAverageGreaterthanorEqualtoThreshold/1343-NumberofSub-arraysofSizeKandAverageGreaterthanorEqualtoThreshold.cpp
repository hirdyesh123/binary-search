// Last updated: 8/2/2026, 7:49:56 PM
1class Solution {
2public:
3    int numOfSubarrays(vector<int>& nums, int k, int val) {
4        int ans=0;
5        int sum=0;
6        int left=0;
7        for(int i=0;i<k;i++){
8           sum+=nums[i];
9        }
10        if(sum/k>=val) ans++;
11        for(int right=k;right<nums.size();right++){
12            sum=sum+nums[right];
13            sum=sum-nums[left];
14            left++;
15            if(sum/k>=val) ans++;
16        }
17        return ans;
18    }
19};