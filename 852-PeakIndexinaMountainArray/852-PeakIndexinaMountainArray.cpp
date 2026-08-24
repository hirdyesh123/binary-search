// Last updated: 8/24/2026, 9:01:24 PM
1class Solution {
2public:
3    int peakIndexInMountainArray(vector<int>& nums) {
4       int i=1;
5       while(i<nums.size()-1){
6          if(nums[i-1]<nums[i] && nums[i+1]<nums[i]) return i;
7          i++;
8       }
9       return -1;
10    }
11};