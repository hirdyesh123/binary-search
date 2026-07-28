// Last updated: 7/28/2026, 9:56:54 PM
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int a=nums[n-1];
        int b=nums[n-2];
        int c=nums[n-3];
        
        int a1=nums[0];
        int b1=nums[1];
        return max(a*b*c,a1*b1*a);
    }
};