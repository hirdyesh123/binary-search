// Last updated: 8/5/2026, 11:50:43 AM
1class Solution {
2public:
3    void helper(deque<int>&dq,int idx,vector<int>&nums){
4        while(!dq.empty() && nums[idx]>nums[dq.back()]) dq.pop_back();
5        dq.push_back(idx);
6    }
7    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
8        int left=0;
9        int right=0;
10        deque<int>dq;
11        vector<int>ans;
12        while(right<nums.size()){
13            helper(dq,right,nums);
14           
15            while(right-left+1==k){
16               ans.push_back(nums[dq.front()]);
17               if(nums[dq.front()]==nums[left]) dq.pop_front();
18               left++;
19            }
20
21            right++;
22        }
23
24        return ans;
25    }
26};