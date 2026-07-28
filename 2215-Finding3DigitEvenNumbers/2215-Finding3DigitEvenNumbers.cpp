// Last updated: 7/28/2026, 9:55:09 PM
class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int>ans;
        unordered_map<int,int>m;
        for(int i=0;i<digits.size();i++){
            m[digits[i]]++;
        }
        for(int i=100;i<999;i+=2){
            int x=i;
            int a,b,c;
            a=x%10;
            x=x/10;
            b=x%10;
            x=x/10;
            c=x%10;
           if(m.find(a)!=m.end()){
            m[a]--;
            if(m[a]==0) m.erase(a);
             if(m.find(b)!=m.end()){
                m[b]--;
                if(m[b]==0) m.erase(b);
                 if(m.find(c)!=m.end()){
                    m[c]--;
                    if(m[c]==0) m.erase(c);
                    ans.push_back(i);
                    m[c]++;
                 }
                 m[b]++;
             }
             m[a]++;
           }

        }
        return ans;
    }
};