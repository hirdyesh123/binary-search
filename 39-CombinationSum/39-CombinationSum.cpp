// Last updated: 7/28/2026, 9:59:05 PM
class Solution {
public:
    void helper(vector<int>& nums, vector<int>& temp, int target, int sum, int i, vector<vector<int>>& ans) {
        // If sum is exactly zero -> valid combination
        if(sum == 0){
            ans.push_back(temp);
            return;
        }

        // If out of bounds OR sum < 0 -> invalid path
        if(i >= nums.size() || sum < 0) return;

        // Pick current number (stay at same index, because we can reuse nums[i])
        temp.push_back(nums[i]);
        helper(nums, temp, target, sum - nums[i], i, ans);
        temp.pop_back();

        // Skip current number (move to next index)
        helper(nums, temp, target, sum, i + 1, ans);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        helper(candidates, temp, target, target, 0, ans);
        return ans;
    }
};
