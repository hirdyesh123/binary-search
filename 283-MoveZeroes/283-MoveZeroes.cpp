// Last updated: 7/28/2026, 9:57:22 PM
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;

        for(int i=1;i<nums.size();i++){
            if(nums[j]==0) swap(nums[j],nums[i]);
            if(nums[j]!=0) j++;
        }
    }
};