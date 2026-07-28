// Last updated: 7/28/2026, 9:59:21 PM
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        set<vector<int>>st;
        vector<vector<int>>ans;
        for(int i =0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            for(int j=i+1;j<nums.size();j++){
                if(j>i+1 && nums[j]==nums[j-1]) continue;
                int l=j+1;
                int k=nums.size()-1;
                while(l<k){
                    long long sum= 1LL * nums[i] + nums[j] + nums[l] + nums[k];
                    if(sum<target) l++;
                    else if(sum >target) k--;
                    else{
                       
                        ans.push_back({nums[i],nums[j],nums[l],nums[k]});
                        k--;
                        l++;
                        while(l<k && nums[l]==nums[l-1]) l++;
                        while(l<k && nums[k]==nums[k+1]) k--;
                    }
                }
            }
        }

        return ans;
    }
};