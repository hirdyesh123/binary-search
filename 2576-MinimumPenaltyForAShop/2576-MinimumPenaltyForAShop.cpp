// Last updated: 7/28/2026, 9:54:57 PM
class Solution {
public:
    int bestClosingTime(string customers) {
        int size=customers.size();
        vector<int>yp(size+1,0);
        vector<int>np(size+1,0);
        for(int i=size;i>=1;i--){
            if(customers[i-1]=='Y') yp[i-1]=1+yp[i];
            else yp[i-1]=yp[i];
        }
        for(int i=0;i<size;i++){
            if(customers[i]=='N') np[i+1]=np[i]+1;
            else np[i+1]=np[i];
        }
        for(int i=0;i<yp.size();i++){
            yp[i]=yp[i]+np[i];
        }
        int min=INT_MAX;
        int idx=0;
        for(int i=0;i<yp.size();i++){
          if(yp[i]<min) min=yp[i];
        }
        for(int i=0;i<yp.size();i++){
            if(min==yp[i]){
                idx=i;
                break;
            }
        }
        return idx;
    }
};