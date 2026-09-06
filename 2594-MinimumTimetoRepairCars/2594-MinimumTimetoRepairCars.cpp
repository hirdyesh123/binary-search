// Last updated: 9/6/2026, 12:56:20 PM
1class Solution {
2public:
3    bool check(vector<int>&nums,long long mid,int cars){
4        long long carused=0;
5        for(int i=0;i<nums.size();i++){
6           carused+=sqrt(mid/nums[i]);
7        }
8        if(carused>=cars) return true;
9        return false;
10    }
11    long long repairCars(vector<int>& nums, int cars) {
12        long long low=1;
13        long long high=LLONG_MIN;
14        for(int i=0;i<nums.size();i++){
15            if(nums[i]>high)high=nums[i];
16        }
17        high=high*cars*cars;
18        while(low<high){
19            long long mid=low+(high-low)/2;
20            if(check(nums,mid,cars)) high=mid;
21            else low=mid+1;
22        }
23        return high;
24    }
25};