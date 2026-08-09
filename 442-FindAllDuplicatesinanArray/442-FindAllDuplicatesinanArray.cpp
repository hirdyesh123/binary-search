// Last updated: 8/9/2026, 10:11:08 PM
1class Solution {
2public:
3    vector<int> findDuplicates(vector<int>& nums) {
4        unordered_map<int,int>map;
5        vector<int>ans;
6        for(int i=0;i<nums.size();i++){
7            map[nums[i]]++;
8        }
9        for(auto i:map){
10            if(i.second==2) ans.push_back(i.first);
11        }
12        return ans;
13    }
14};