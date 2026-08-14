// Last updated: 8/14/2026, 10:33:13 AM
1class Solution {
2public:
3    int findKthPositive(vector<int>& nums, int k) {
4       int low=0;
5       int high=nums.size()-1;
6       while(low<=high){
7        int mid=low+(high-low)/2;
8        int val=nums[mid]-(mid+1);
9        if(val==0 || val<k) low=mid+1;
10        else high=mid-1;
11
12       }
13       return low+k;
14    }
15};