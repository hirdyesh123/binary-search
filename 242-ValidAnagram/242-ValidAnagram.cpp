// Last updated: 7/28/2026, 9:57:26 PM
class Solution {
public:
    bool isAnagram(string s, string t) {
   
        if(s.size()!=t.size()) return false;
        unordered_map<char,int>m1;
        unordered_map<char,int>m2;
        for(int i=0;i<s.size();i++){
            m1[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            m2[t[i]]++;
        }
        for(auto ele: m1){
            char ch=ele.first;
            int f= ele.second;
            if(m2.find(ch)!=m2.end()){
                int x=m2[ch];
                if(x!=f) return false;
            }
            else return false;
        }
       return true;
  
    }
};