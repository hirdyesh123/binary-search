// Last updated: 7/28/2026, 9:55:35 PM
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n= nums.size();
       // vector<int> run(n);
       // run[0]=nums[0];
       
        for(int i=1;i<n;i++){
            nums[i]=nums[i-1]+nums[i];
        }
        return nums;
    }
};