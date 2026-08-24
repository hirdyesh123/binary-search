// Last updated: 8/24/2026, 9:26:39 PM
1class Solution {
2public:
3    int findMin(vector<int>& nums) {
4         int low=0;
5        int high=nums.size()-1;
6        while(low<high){
7            int mid=low+(high-low)/2;
8            if(nums[mid]<nums[high]) high=mid;
9            else low=mid+1;
10        }
11        return nums[low];
12    }
13};