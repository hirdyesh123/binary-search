// Last updated: 8/6/2026, 12:31:31 PM
1class Solution {
2public:
3    int maxSatisfied(vector<int>& nums, vector<int>& grumpy, int k) {
4        int total=0;
5        int sum=0;
6        int ans=0;
7        for(int i=0;i<nums.size();i++){
8            if(grumpy[i]==0) total+=nums[i];
9        }
10        int i=0;
11        int j=0;
12        while(j<nums.size()){
13           if(grumpy[j]==1) sum=sum+nums[j];
14           
15           
16           if(j-i+1>k){
17              if(grumpy[i]==1) sum=sum-nums[i];
18              i++;
19           }
20           if(j-i+1==k) ans=max(ans,total+sum);
21           j++;
22        }
23        return ans;
24    }
25};