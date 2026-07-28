// Last updated: 7/28/2026, 9:57:16 PM
class Solution {
public:
    void reverseString(vector<char>& s) {
        int left=0;
        int right=s.size()-1;
        while(left<=right){
            char temp= s.at(left);
            s[left]=s[right];        
            s[right]=temp;
            right--;
            left++;
        }
      
    }
};