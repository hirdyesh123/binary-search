// Last updated: 7/28/2026, 9:57:52 PM
class Solution {
public:
    int rob(vector<int>& nums) {
        int x=0;
        int y=0;
        int ans=0;
        for(int i=nums.size()-1;i>=0;i--){
            int pick=nums[i]+x;
            int notpick=y;
            ans=max(pick,notpick);
            x=y;
            y=ans;

        }
        return ans;
    }
};