// Last updated: 7/28/2026, 9:58:46 PM
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& nums, int target) {
        int r=nums.size();
        int c=nums[0].size();
        int low=0;
        int high=r*c-1;
        while(low<=high){
            int mid=(low+high)/2;
            int row=mid/c;
            int col=mid%c;
            if(nums[row][col]==target) return true;
            else if(nums[row][col]>target) high=mid-1;
            else low=mid+1;
        }
        return false;
    }
};