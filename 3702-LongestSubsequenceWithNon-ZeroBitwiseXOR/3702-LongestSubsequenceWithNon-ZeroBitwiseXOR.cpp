// Last updated: 8/15/2026, 9:09:09 AM
1class Solution {
2public:
3    int longestSubsequence(vector<int>& nums) {
4        int x=0;
5        bool flag=true;
6        for(int i:nums){
7            x=x^i;
8            if(i!=0) flag=false;
9        }
10        if(flag) return 0;
11        if(x!=0) return nums.size();
12        else return nums.size()-1;
13        return 0;
14    }
15};