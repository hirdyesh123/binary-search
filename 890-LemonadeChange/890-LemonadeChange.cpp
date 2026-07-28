// Last updated: 7/28/2026, 9:56:32 PM
class Solution {
public:
    bool lemonadeChange(vector<int>& nums) {
        int count5=0;
        int count10=0;
       // int count20=0;
       
       for(int i=0;i<nums.size();i++){
          if(nums[i]==5) count5++;
          if(nums[i]==10) {
            count10++;
           if(count5>0)  count5--;
           else return false;
          }
          if(nums[i]==20){
             if(count10 > 0 && count5>0){
                count10--;
                count5--;
             }
             else if(count5>=3) count5=count5-3;
             else return false;
          }
       }
       return true;
    }
};