// Last updated: 7/28/2026, 9:58:19 PM
class Solution {
public:
    int maxProfit(vector<int>& nums) {
     int l=0;
     int r=1;
     int maxsum=0;
     while(r<nums.size()){
        if(nums[l]<nums[r]){
            maxsum=max(maxsum,nums[r]-nums[l]);
            r++;
        }
        else{
          l=r;
          r++;
           
        }
        
     }
     return maxsum;
    }
};