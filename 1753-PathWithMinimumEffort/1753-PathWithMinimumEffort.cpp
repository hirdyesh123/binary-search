// Last updated: 7/28/2026, 9:55:29 PM
class Solution {
public:
    int absval(int a,int b){
        return abs(a-b);
    }

    int minimumEffortPath(vector<vector<int>>& heights) {
        queue<pair<int,int>>q;
        vector<vector<int>>effort(heights.size(),vector<int>(heights[0].size(),1e9));
        vector<pair<int,int>>padosi={{-1,0},{0,-1},{0,1},{1,0}};
        effort[0][0]=0;
        q.push({0,0});
        while(!q.empty()){
            auto temp=q.front();
            q.pop();
            int row=temp.first;
            int col=temp.second;
            for(auto i:padosi){
                int newrow=row+i.first;
                int newcol=col+i.second;
                if(newrow>=0 && newcol>=0 && newrow<heights.size() && newcol<heights[0].size()){
                      int newvalue= absval(heights[row][col],heights[newrow][newcol]);
                      int oldvalue=effort[row][col];
                      int thirdvalue=effort[newrow][newcol];
                      if ( max(newvalue,oldvalue) < thirdvalue){
                         effort[newrow][newcol]= max(newvalue,oldvalue);
                         q.push({newrow,newcol});
                      }
                }
            }
        }
        int o=heights.size()-1;
        int p=heights[0].size()-1;
        return effort[o][p];
    }
};