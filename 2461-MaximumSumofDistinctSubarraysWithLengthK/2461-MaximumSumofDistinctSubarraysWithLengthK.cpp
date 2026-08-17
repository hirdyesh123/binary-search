// Last updated: 8/17/2026, 12:24:13 PM
1class Solution {
2public:
3    long long maximumSubarraySum(vector<int>& nums, int k) {
4        int i=0;
5        int j=0;
6        long long ans=0;
7        long long sum=0;
8        unordered_map<int,int>map;
9        while(j<nums.size()){
10            map[nums[j]]++;
11            sum=sum+nums[j];
12            while(j-i+1>k || map[nums[j]]>1){
13                map[nums[i]]--;
14                sum=sum-nums[i];
15                i++;
16            }
17           if(j-i+1==k) ans=max(ans,sum);
18            j++;
19        
20        }
21        return ans;
22    }
23};