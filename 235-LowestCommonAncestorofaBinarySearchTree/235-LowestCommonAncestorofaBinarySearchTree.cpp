// Last updated: 8/7/2026, 11:16:05 PM
1class Solution {
2public:
3    bool containsDuplicate(vector<int>& nums) {
4       sort(nums.begin(),nums.end());
5       if(nums.size()<2) return false;
6      
7       int j=1;
8       while(j<nums.size()){
9           if(nums[j]==nums[j-1]) return true;
10           j++;
11       }
12       return false;
13    }
14};