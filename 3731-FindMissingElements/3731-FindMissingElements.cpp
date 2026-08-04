// Last updated: 8/4/2026, 11:48:19 AM
1class Solution {
2public:
3    vector<int> findMissingElements(vector<int>& nums) {
4        sort(nums.begin(),nums.end());
5        vector<int>ans;
6        int mine=nums[0];
7        int maxe=nums[nums.size()-1];
8        unordered_set<int>s;
9        for(auto i:nums){
10           s.insert(i);
11        }
12        for(int i=mine;i<=maxe;i++){
13            if(s.find(i)==s.end()) ans.push_back(i);
14        }
15        return ans;
16    }
17};