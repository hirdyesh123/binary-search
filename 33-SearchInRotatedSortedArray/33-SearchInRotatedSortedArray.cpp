// Last updated: 7/28/2026, 9:59:10 PM
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;

        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target) return mid;
            if(nums[mid]<nums[high]){       //right sorted
               if(nums[mid]<=target && nums[high]>=target) low=mid+1;
               else high=mid-1;
            }
            else {
                if(nums[low]<=target && nums[mid]>=target) high=mid-1;
                else low=mid+1;
            }
        }
        return -1;
    }
};