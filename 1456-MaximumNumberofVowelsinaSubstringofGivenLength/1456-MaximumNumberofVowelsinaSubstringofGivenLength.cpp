// Last updated: 8/5/2026, 2:01:40 PM
1class Solution {
2public:
3    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
4        int i=0;
5        int j=0;
6        if(k<=1) return 0;
7        long long mult=1;
8        int ans=0;
9        while(j<nums.size()){
10            mult=mult*nums[j];
11           while (mult>=k){
12             mult=mult/nums[i];
13             i++;
14           }
15          if(i<nums.size())  ans+=j-i+1;
16           j++;
17        }
18        return ans;
19    }
20};