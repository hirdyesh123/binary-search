// Last updated: 9/5/2026, 9:48:58 AM
1class Solution {
2public:
3    int firstStableIndex(vector<int>& nums, int k) {
4        vector<int>x(nums.size(),0);
5        pair<bool,int>ans={false,nums.size()-1};
6        x[nums.size()-1]=nums[nums.size()-1];
7        for(int i=nums.size()-2;i>=0;i--){
8            x[i]=min(x[i+1],nums[i]);
9        }
10        int maxe=INT_MIN;
11        int idx=-1;
12        for(int i=0;i<nums.size();i++){
13            maxe=max(maxe,nums[i]);
14           int check=maxe-x[i];
15           if(check<=k ){
16            ans.first=true;
17            ans.second=min(ans.second,i);
18           }
19        }
20        if(!ans.first) return -1;
21        return ans.second;
22    }
23}; 