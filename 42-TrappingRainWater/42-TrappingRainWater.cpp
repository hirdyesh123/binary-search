// Last updated: 7/28/2026, 9:59:04 PM
class Solution {
public:
    int trap(vector<int>& nums) {
        vector<int>pge (nums.size(),-1);
         vector<int>nge (nums.size(),-1);
         if(nums.size()==0 || nums.size()==1) return 0;
         int max=INT_MIN;
         for(int i=1;i<nums.size();i++){
             if(max<nums[i-1]) max=nums[i-1];
            pge[i]=max;
         }
         max=INT_MIN;
         for(int i=nums.size()-2;i>=0;i--){
            if(max<nums[i+1]) max=nums[i+1];
            nge[i]=max;
         }

         for(int i=0;i<nums.size();i++){
            int x = min(pge[i],nge[i]);
            pge[i]=x;
         }
         int ans=0;
         for(int i=0;i<nums.size();i++){
            int x= pge[i]-nums[i];
            if(x>0) ans=ans+x;
         }
       return ans;
    }
};