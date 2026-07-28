// Last updated: 7/28/2026, 9:57:40 PM
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
         priority_queue<int,vector<int>,greater<int>>p;
         int n=nums.size();
         for(int i=0;i<n;i++){
            p.push(nums[i]);
            if(p.size()>k) p.pop();
         }
         
         return p.top();
    }
};