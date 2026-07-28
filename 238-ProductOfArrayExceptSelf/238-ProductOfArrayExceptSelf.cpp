// Last updated: 7/28/2026, 9:57:29 PM
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int pre[n];
        int suf[n];
        suf[n-1]=1;
        pre[0]=1;
        for(int i=1;i<=n-1;i++){
            pre[i]=pre[i-1]*nums[i-1];
        }
        for(int i=n-2;i>=0;i--){
            suf[i]=suf[i+1]*nums[i+1];
        }
        for(int i=0;i<=n-1;i++){
            nums[i]=pre[i]*suf[i];
        }
        return nums;
    }
};