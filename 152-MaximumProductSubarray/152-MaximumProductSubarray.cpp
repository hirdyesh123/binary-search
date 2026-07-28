// Last updated: 7/28/2026, 9:58:01 PM
class Solution {
public:
    int maxProduct(vector<int>& nums) {
    
         int maax=INT_MIN;
         int prefix=1;
         int suffix=1;
        
         for(int i=0;i<nums.size();i++){
            if(prefix==0) prefix=1;
             prefix*=nums[i];
            maax=max(maax,prefix);
         }
          for(int i=nums.size()-1;i>=0;i--){
            if(suffix==0) suffix=1;
             suffix*=nums[i];
            maax=max(maax,suffix);
         }
         return maax;
         
    }
};