// Last updated: 7/28/2026, 9:58:43 PM
class Solution {
public:
 void helper(vector<vector<int>>&ans,vector<int>temp,int idx,int n,vector<int>&nums){
    if(idx==n){
        ans.push_back(temp);
        return;
    }
    temp.push_back(nums[idx]);
    helper(ans,temp,idx+1,n,nums);
    temp.pop_back();
    helper(ans,temp,idx+1,n,nums);

 }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        helper(ans,temp,0,nums.size(),nums);
        return ans;

    }
};