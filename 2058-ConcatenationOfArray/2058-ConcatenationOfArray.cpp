// Last updated: 7/28/2026, 9:55:15 PM
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>ans(nums.size()+nums.size());
        int pointer=nums.size();
        for(int i=0;i<nums.size();i++){
            ans[i]=nums[i];
            ans[pointer]=nums[i];
            pointer++;
        }
        return ans;
    }
};