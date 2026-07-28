// Last updated: 7/28/2026, 9:57:07 PM
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maxcount=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1) count++;
            if(nums[i]==0) count=0;
            maxcount=max(count,maxcount);
        }
        return maxcount;
    }
};