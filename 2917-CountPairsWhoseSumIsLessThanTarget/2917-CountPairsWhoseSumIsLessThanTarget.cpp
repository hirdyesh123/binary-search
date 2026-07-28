// Last updated: 7/28/2026, 9:54:52 PM
class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());  // -1 1 1 2 3 
        int ans=0;
        int start=0;
        int end=nums.size()-1;
         while(start<end){
            if(nums[start]+nums[end]>=target){
                end--;
            }
            else{
                ans+=end-start;
                start++;
                end=nums.size()-1;
            }
         }
         return ans;
    }
};