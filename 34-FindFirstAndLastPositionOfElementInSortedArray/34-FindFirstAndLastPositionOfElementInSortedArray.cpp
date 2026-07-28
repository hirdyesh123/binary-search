// Last updated: 7/28/2026, 9:59:08 PM
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
         int  lp=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
         int up= upper_bound(nums.begin(),nums.end(),target)-nums.begin();
        if(lp==nums.size() || nums[lp]!=target) return {-1,-1};
         return{lp,up-1};
    }
};