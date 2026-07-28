// Last updated: 7/28/2026, 9:54:29 PM
class Solution {
public:
    int digsummax=INT_MIN;
    int totalsum=0;
    void helper(int number){
        int currmax=INT_MIN;
        int currmin=INT_MAX;
        int val=number;
        while(number>0){
            int temp= number%10;
            number=number/10;
            currmax=max(currmax,temp);
            currmin=min(currmin,temp);
        }
        int sum= abs(currmax-currmin);
       if(sum > digsummax) {
            digsummax = sum;
            totalsum = val;   // new best found
        }
        else if(sum == digsummax) {
            totalsum += val;  // same best
        }
    }
    int maxDigitRange(vector<int>& nums) {
        
        for(int i=0;i<nums.size();i++){
            helper(nums[i]);
        }
        return totalsum;
    }
};