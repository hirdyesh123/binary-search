// Last updated: 7/28/2026, 9:54:54 PM
class Solution {
public:
  bool isprime(int x){
    if(x==1)  return false;
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
  }
    int diagonalPrime(vector<vector<int>>& nums) {
        int max=0;
        for(int i=0;i<nums.size();i++){
            if(isprime(nums[i][i])){
                if(max<nums[i][i]) max=nums[i][i];
            }
            if(isprime(nums[i][nums.size()-i-1])){
                if(max<nums[i][nums.size()-i-1]) max=nums[i][nums.size()-i-1];
            }
        }
        return max;
    }
};