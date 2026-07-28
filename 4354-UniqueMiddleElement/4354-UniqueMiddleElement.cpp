// Last updated: 7/28/2026, 9:54:35 PM
class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n=nums.size();
        int ele=nums[n/2];
        unordered_map<int,int>map;
        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
        }

        if(map[ele]==1) return true;


        return false;
    }
};