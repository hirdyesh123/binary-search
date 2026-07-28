// Last updated: 7/28/2026, 9:57:11 PM
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int ns=s.size();
        int nt=t.size();
        int i=0;
        int j=0;
        while(j<nt){
            if(s[i]==t[j]){
                i++;
                j++;
            }
            else j++;
            
        }
        if(i<ns) return false;
         return true;
   
    }
};