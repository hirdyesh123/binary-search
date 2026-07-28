// Last updated: 7/28/2026, 9:59:27 PM
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>hash(255,0);
        int left=0;
        int right=0;
        int maxlength=0;
        while(right<s.size()){
         if(hash[s.at(right)] !=1){
            hash[s.at(right)]=1;
            right++;
            maxlength=max(maxlength,right-left);
         }
         else {
           
             hash[s.at(left)]=0;
             left++;
            
         }
          
        }
        return maxlength;
    }
};