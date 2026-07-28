// Last updated: 7/28/2026, 9:55:19 PM
class Solution {
public:
    int maxIceCream(vector<int>& nums, int coins) {
        sort(nums.begin(),nums.end());
        int ans=0;
        for(int i=0;i<nums.size();i++){
            coins-=nums[i];
            if(coins>=0) ans++;
            else break;
        }
        return ans;
    }
};