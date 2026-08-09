// Last updated: 8/9/2026, 10:06:36 PM
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        unordered_map<int, int>m;
5        vector<int>ans;
6      for(int i=0;i<nums.size();i++){
7         int x= target-nums[i];
8         if(m.find(x)!=m.end()){
9            ans.push_back(m[x]);
10            ans.push_back(i);
11         }
12         else m[nums[i]]=i;
13      }
14      return ans;
15    }
16};