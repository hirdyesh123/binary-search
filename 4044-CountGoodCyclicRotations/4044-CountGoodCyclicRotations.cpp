// Last updated: 9/7/2026, 11:05:20 PM
1class Solution {
2public:
3    int countGoodRotations(vector<int>& nums) {
4        long long totalsum=0;
5        for(auto x:nums){
6            totalsum+=x;
7        } 
8        long long leftsum=0;
9        for(int i=0;i<nums.size()/2;i++){
10           leftsum+=nums[i];
11        }
12        long long rightsum=0;
13        int ans=0;
14        for(int i=0;i<nums.size();i++){
15           rightsum=totalsum-leftsum;
16           if(leftsum>rightsum) ans++;
17           leftsum-=nums[i];
18           leftsum+=nums[(i+nums.size()/2)%nums.size()];
19        }
20        return ans;
21    }
22};