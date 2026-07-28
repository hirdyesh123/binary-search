// Last updated: 7/28/2026, 9:56:11 PM
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0;
        int r=0;
        int zeros=0;
        int maxlength=0;
        while(r<nums.size()){
            if(nums[r]==0){
                zeros++;
            }
             while(zeros>k){
                if(nums[l]==0)  zeros--;
                l++;
            }
             maxlength=max(maxlength,r-l+1);
             r++;
        }
        return maxlength;
    }
};