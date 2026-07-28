// Last updated: 7/28/2026, 9:55:59 PM
class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<vector<int>>dist(n,vector<int>(n,1e9));
        queue<pair<int,pair<int,int>>>q;
        vector<pair<int,int>>padosi={{-1,-1},{-1,0},{-1,+1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};
        dist[0][0]=1;
        q.push({1,{0,0}});
        while(!q.empty()){
          auto temp=q.front();
          q.pop();
          int row=temp.second.first;
          int col=temp.second.second;
          
          for(auto i:padosi){
            int newrow= row+i.first;
            int newcol= col+i.second;
            if(newrow>=0 && newcol>=0 && newrow<n && newcol<n && grid[newrow][newcol]==0){
                 int newdistance=dist[row][col]+1;
                 if(dist[newrow][newcol]>newdistance) {
                    dist[newrow][newcol]=newdistance;
                    q.push({newdistance,{newrow,newcol}});
                 }
            }
          }
        }
        if(grid[0][0]==1 || grid[n-1][n-1]==1 || dist[n-1][n-1]==1e9) return -1;
        return dist[n-1][n-1];
      
    }
};