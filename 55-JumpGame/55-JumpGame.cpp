// Last updated: 7/28/2026, 9:59:00 PM
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxidx=0;
        for(int i=0;i<nums.size();i++){
            if(maxidx<i) return false;
           maxidx=max(maxidx,i+nums[i]);

        }
        return true;
    }
};