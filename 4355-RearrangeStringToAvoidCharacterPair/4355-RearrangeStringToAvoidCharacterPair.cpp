// Last updated: 7/28/2026, 9:54:33 PM
class Solution {
public:
    string rearrangeString(string s, char x, char y) {
       string ans="";

        for(auto i:s){
            if(y==i) ans=i+ans;
            else ans=ans+i;
        }
      return ans;
    }
};