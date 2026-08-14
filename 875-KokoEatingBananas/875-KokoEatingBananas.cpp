// Last updated: 8/14/2026, 1:00:08 PM
1class Solution {
2public:
3    bool canieat(vector<int>&nums,int h,int k){
4         int temp=0;
5         for(int i=0;i<nums.size();i++){
6           temp += (nums[i] + k - 1) / k;
7         }
8         if(temp<=h) return true;
9         return false;
10    }
11    int minEatingSpeed(vector<int>& nums, int h) {
12        int high=0;
13        for(int i=0;i<nums.size();i++){
14            high=max(high,nums[i]);
15        }
16        int low=1;
17        while(low<high){
18            int mid=low+(high-low)/2;
19            if(canieat(nums,h,mid)) high=mid;
20            else  low=mid+1;
21        }
22        return high;
23    }
24};