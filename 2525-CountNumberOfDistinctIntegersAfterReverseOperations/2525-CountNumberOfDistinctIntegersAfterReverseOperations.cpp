// Last updated: 7/28/2026, 9:54:59 PM
class Solution {
public:
 int rd(int x){
    int ans=0;
    while(x>0){
        int y= x%10;
      ans= ans*10+y;
       x=x/10;
    }
    return ans;
 }
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int>s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }

        for(int i=0;i<nums.size();i++){
            int y= rd(nums[i]);
            s.insert(y);
        }
      return s.size();
    }
};