// Last updated: 7/28/2026, 9:58:10 PM
class Solution {
public:
int ans=0;
    int singleNumber(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            ans=nums[i]^ans;
        }
        return ans;
    }
};