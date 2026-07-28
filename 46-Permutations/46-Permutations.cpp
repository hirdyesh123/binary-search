// Last updated: 7/28/2026, 9:59:01 PM
class Solution {
public:
void helper(vector<int>&nums,vector<vector<int>>&ans,vector<int>&freq,vector<int>temp){
    if(temp.size()==nums.size()){
        ans.push_back(temp);
        return ;
    }
        for(int i=0;i<nums.size();i++){
            if(freq[i]==0){
                temp.push_back(nums[i]);
                freq[i]=1;
                helper(nums,ans,freq,temp);
                temp.pop_back();
                freq[i]=0;
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        vector<int>freq(nums.size(),0);
        helper(nums,ans,freq,temp);
         return ans;
        }
};