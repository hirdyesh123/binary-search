// Last updated: 7/28/2026, 9:54:36 PM
class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string>ans;
        vector<vector<int>>isvisited(m,vector<int>(n,0));
        for(int i=0;i<n;i++){
            isvisited[0][i]=1;
        }

        for(int i=0;i<m;i++){
            isvisited[i][n-1]=1;
        }

        for(int i=0;i<m;i++){
            string temp="";
            for(int j=0;j<n;j++){
                if(isvisited[i][j]==1) temp+=".";
                else temp+="#";
            }
            ans.push_back(temp);
        }
        return ans;
    }
};