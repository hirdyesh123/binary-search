// Last updated: 9/3/2026, 6:27:24 PM
1class Solution {
2public:
3    bool uniformArray(vector<int>& nums) {
4        int mine=INT_MAX;
5        for(int i=0;i<nums.size();i++){
6            if(nums[i]%2==1) mine=min(mine,nums[i]);
7        }
8        if(mine==INT_MAX) return true;
9        for(int i=0;i<nums.size();i++){
10            if(nums[i]%2==0 && nums[i]<=mine) return false;
11        }
12        return true;
13    }
14};