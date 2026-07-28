// Last updated: 7/28/2026, 9:57:08 PM
class Solution {
public:
    int findContentChildren(vector<int>& greed, vector<int>& cookies) {
    sort(greed.begin(),greed.end());
    sort(cookies.begin(),cookies.end());
    int ans=0;
     int i=0;
     int j=0;
     while(i<greed.size() && j<cookies.size()){
        if(greed[i]<=cookies[j]) {
            ans++;
            j++;
            i++;
        }
        else j++;
     }
     return ans;
    }
};