// Last updated: 8/16/2026, 12:28:46 PM
1class Solution {
2public:
3    int tanvika(int x){
4        int ans=0;
5        while(x>0){
6            int val=x%10;
7            x=x/10;
8            ans=ans+val;
9        }
10        return ans;
11    }
12    int maximumSum(vector<int>& nums) {
13        unordered_map<int,int>map;
14        int ans=0;
15        for(int i=0;i<nums.size();i++){
16            int sum=tanvika(nums[i]);
17            if(map.find(sum)!=map.end()){
18                ans=max(ans,map[sum]+nums[i]);
19                map[sum]=max(map[sum],nums[i]);
20            }
21            else map[sum]=nums[i];
22        }
23        if(ans==0) return -1;
24        return ans;
25    }
26};