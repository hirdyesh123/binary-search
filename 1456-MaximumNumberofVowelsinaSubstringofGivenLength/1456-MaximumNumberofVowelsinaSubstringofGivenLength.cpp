// Last updated: 8/5/2026, 1:44:25 PM
1class Solution {
2public:
3    int numSubarraysWithSum(vector<int>& nums, int goal) {
4        unordered_map<int,int>map;  //key freq
5        vector<int>prefix(nums.size()+1,0);
6        int ans=0;
7        for(int i=1;i<prefix.size();i++){
8          prefix[i]=nums[i-1]+prefix[i-1];
9        }
10        
11        for(int i=0;i<prefix.size();i++){
12            if(map.find(prefix[i]-goal)!=map.end()) ans=ans+map[prefix[i]-goal];
13
14            map[prefix[i]]++;
15        }
16        return ans;
17    }
18};