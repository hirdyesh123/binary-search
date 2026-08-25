// Last updated: 8/25/2026, 11:31:17 AM
1class Solution {
2public:
3    int check(int x,vector<int>&nums){
4        int counter=0;
5        for(int &i:nums){
6            if(i>=x) counter++;
7        }
8        if(counter==x) return 0;
9        else if(counter>x) return 1;
10        return -1;
11    }
12    int specialArray(vector<int>& nums) {
13        int low=0;
14        int high=nums.size();
15     
16        while(low<=high){
17            int mid=(low+high)/2;
18            if(check(mid,nums)==0) return mid;
19            else if(check(mid,nums)==1) low=mid+1;
20            else high=mid-1;
21        }
22        return -1;
23    }
24};