// Last updated: 8/6/2026, 10:55:52 AM
1class Solution {
2public:
3    long long countSubarrays(vector<int>& nums, int k) {
4        int maxval=INT_MIN;
5        for(int i=0;i<nums.size();i++){
6            maxval=max(maxval,nums[i]);
7        }
8        int maxcount=0;
9        int i=0;
10        int j=0;
11        long long  ans=0;
12        while(j<nums.size()){
13            if(nums[j]==maxval) maxcount++;
14
15            while( maxcount>=k){
16                ans=ans+nums.size()-j;
17                if(nums[i]==maxval) maxcount--;
18                i++;
19            }
20
21
22            j++;
23        }
24        return ans;
25    }
26};