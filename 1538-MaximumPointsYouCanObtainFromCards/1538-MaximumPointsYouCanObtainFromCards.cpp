// Last updated: 7/28/2026, 9:55:42 PM
class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int lsum=0;
        int rsum=0;
        
        for(int i=0;i<k;i++){
            lsum+=nums[i];
        }
        int maxsum=lsum;
        int left=k-1;
        int right=nums.size()-1;
        while(left>=0){
            lsum-=nums[left];
            rsum+=nums[right];
            left--;
            right--;
            maxsum=max(maxsum,lsum+rsum);

        }
        return maxsum;
    }
};