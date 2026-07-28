// Last updated: 7/28/2026, 9:58:41 PM
class Solution {
public:
    bool search(vector<int>& nums, int target) {
         int low=0;
        int high=nums.size()-1;
      while(low<=high){
        int mid= (low+high)/2;
        if(nums[mid]==target) return true;
          if(nums[low]==nums[mid] && nums[mid]==nums[high]){
              low++;
              high--;
              continue;
        }
        
        if(nums[mid]>=nums[low]){        //left sorted
              if(nums[low]<=target && nums[mid]>=target){
                high=mid-1;
              }
              else low=mid+1;
        }
        else{                            // right sorted
             if(nums[mid]<=target && nums[high]>=target){
                low=mid+1;
             }
             else high=mid-1;
        }
      }
      return false;
    }
};