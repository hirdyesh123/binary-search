// Last updated: 7/28/2026, 9:55:22 PM
class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return true;
        int count=1;
        for(int i=1;i<2*n;i++){
            if(nums[(i-1)%n]<=nums[i%n]) count++;
            else count=1;
            if(count==n) return true;
              
        }
        return false;
    }
};