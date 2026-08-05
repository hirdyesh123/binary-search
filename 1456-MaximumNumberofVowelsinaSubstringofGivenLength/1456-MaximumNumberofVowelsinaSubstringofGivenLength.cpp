// Last updated: 8/5/2026, 2:18:25 PM
1class Solution {
2public:
3    bool check(unordered_map<int,int>&map,int k){
4        for(auto &i:map){
5            if(i.second>k) return false;
6        }
7        return true;
8    }
9    int maxSubarrayLength(vector<int>& nums, int k) {
10        int ans=0;
11        int i=0;
12        int j=0;
13        unordered_map<int,int>map;
14        while(j<nums.size()){
15            map[nums[j]]++;
16            if(map[nums[j]]<=k) ans=max(ans,j-i+1);
17            else {
18                while(i<j && map[nums[j]]>k){
19                    map[nums[i]]--;
20                    i++;
21                }
22            }
23            j++;
24        }
25        return ans;
26    }
27};