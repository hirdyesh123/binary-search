// Last updated: 7/28/2026, 9:56:53 PM
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        int left=0;
        int maxsum=sum;
        for(int right=k;right<nums.size();right++){
          sum+=nums[right];
          sum-=nums[left];
          left++;
          maxsum=max(maxsum,sum);
        }
        return (double)maxsum/k;
    }
};