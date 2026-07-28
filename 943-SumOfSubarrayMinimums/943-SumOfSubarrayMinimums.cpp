// Last updated: 7/28/2026, 9:56:24 PM
class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
       stack<int>st;
       stack<int>st1;
       vector<int>nsi(arr.size());
       vector<int>psi(arr.size());
       long long sum=0;
       nsi[arr.size()-1]= arr.size();
       st.push(arr.size()-1);
       for(int i= arr.size()-2;i>=0;i--){
          while(st.size()>0 && arr[st.top()]>=arr[i]) st.pop();
          if(st.size()==0) nsi[i]=arr.size();
          else nsi[i]=st.top();
          st.push(i);
       }

       psi[0]=-1;
       st1.push(0);
       for(int i=1;i<arr.size();i++){
        while(st1.size()>0 && arr[st1.top()]>arr[i]) st1.pop();
        if(st1.size()==0) psi[i]=-1;
        else psi[i]=st1.top();
        st1.push(i);
       }
    
     for(int i=0;i<arr.size();i++){
        int nse=nsi[i]-i;
        int pse=i-psi[i];
        sum += (long long)nse * pse * arr[i];

     }

     return sum%1000000007;
    }
};