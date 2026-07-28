// Last updated: 7/28/2026, 9:55:43 PM
class Solution {
public:
    int maxSatisfaction(vector<int>& v) {
        int output=0;
        sort(v.begin(),v.end());
        int a= v.size();
        bool flag=false;
        vector<int> suff(a);
        suff[a-1]=v[a-1];
     for(int i=a-2;i>=0;i--){
          suff[i]=suff[i+1]+v[i];
     }
     int idx=a;
     for(int i=0;i<a;i++){
        if(suff[i]>0){
            idx=i;
            break;
        }
      
     }
     int x=1;
     for(int i=idx;i<a;i++){
        output += v[i]*x;
        x++;
     }
    
     return output;
    }
};