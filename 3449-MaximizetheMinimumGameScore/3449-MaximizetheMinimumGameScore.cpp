// Last updated: 9/1/2026, 10:33:56 PM
1class Solution {
2public:
3    bool possible(vector<int>&nums,int mid,int mo){
4          long long total=0;
5          for(int i=0;i<nums.size();i++){
6             int ops=nums[i]/mid;
7             if(nums[i]%mid==0) ops--;
8             total+=ops;
9          }
10          return total<=mo;
11    }
12    int minimumSize(vector<int>& nums, int maxOperations) {
13        int low=1;
14        int high=*max_element(nums.begin(),nums.end());
15        while(low<=high){
16          int mid=low+(high-low)/2;
17          if(possible(nums,mid,maxOperations)) high=mid-1;
18          else low=mid+1;
19        }   
20        return low;
21    }
22};