// Last updated: 7/28/2026, 9:58:58 PM
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maxsum=INT_MIN;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
             maxsum=max(maxsum,sum);
            if(sum<0) sum=0;


        }
        return maxsum;
    }
};