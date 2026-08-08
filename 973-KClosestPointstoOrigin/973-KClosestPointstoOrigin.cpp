// Last updated: 8/8/2026, 1:37:28 AM
1class Solution {
2public:
3    int kthSmallest(vector<vector<int>>& nums, int k) {
4        priority_queue<int,vector<int>,greater<int>>pq;
5        int ans=0;
6        for(int i=0;i<nums.size();i++){
7            for(int j=0;j<nums.size();j++){
8                pq.push(nums[i][j]);
9            }
10        }
11
12        while(k--){
13            ans=pq.top();
14            pq.pop();
15        }
16        return ans;
17    }
18};