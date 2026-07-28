// Last updated: 7/28/2026, 9:57:23 PM
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size= nums.size()+1;
        int xor1=0;
        int xor2=0;
        for(int i=0;i<nums.size();i++){
            xor1=xor1^nums[i];
        }
        for(int i=1;i<size;i++){
            xor2=xor2^i;
        }
        return xor1^xor2;
    }
};