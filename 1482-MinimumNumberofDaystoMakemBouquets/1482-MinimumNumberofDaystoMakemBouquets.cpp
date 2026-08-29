// Last updated: 8/29/2026, 9:06:27 PM
1class Solution {
2public:
3    bool check(vector<int>&nums,int mid,int m,int k){
4        int temp=0;
5        int count=0;
6       for(int i=0;i<nums.size();i++){
7           if(mid>=nums[i]) count++;
8           else count=0;
9           if(count==k) {
10            temp++;
11            count=0;
12           }
13        }
14        
15        if(temp>=m) return true;
16
17        return false;
18
19     }
20    int minDays(vector<int>& nums, int m, int k) {
21        if(nums.size()< 1LL* m*k) return -1;
22        int low=*min_element(nums.begin(),nums.end());
23        int high=*max_element(nums.begin(),nums.end());
24        while(low<high){
25            int mid=low+(high-low)/2;
26            if(check(nums,mid,m,k)) high=mid;
27            else low=mid+1;
28        }
29        return high;
30    }
31};