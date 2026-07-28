// Last updated: 7/28/2026, 9:58:20 PM
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
         vector<vector<int>>a;
        for(int i=0;i< numRows;i++){
            vector<int>temp;
            int ans=1;
            temp.push_back(ans);
            for(int j=1;j<i+1;j++){
               ans=ans*(i-j+1);
               ans/=j;
               temp.push_back(ans);
            }
            a.push_back(temp);
        }
        return a;
    }
};