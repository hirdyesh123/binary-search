// Last updated: 7/28/2026, 9:57:49 PM
class Solution {
public:
    void bfs(vector<vector<char>>&grid,vector<vector<int>>&isvisited,int i,int j){
            queue<pair<int,int>>q;
            q.push({i,j});
            isvisited[i][j]=1;
            while(!q.empty()){
                auto node=q.front();
                q.pop();
                int a=node.first;
                int b=node.second;
                if( b<grid[0].size()-1 && grid[a][b+1]=='1' && isvisited[a][b+1]!=1 ){
                    isvisited[a][b+1]=1;
                    q.push({a,b+1});
                }
                if( b>0 && grid[a][b-1]=='1' && isvisited[a][b-1]!=1){
                    isvisited[a][b-1]=1;
                    q.push({a,b-1});
                }
                if( a>0 && grid[a-1][b]=='1' && isvisited[a-1][b]!=1 ){
                    isvisited[a-1][b]=1;
                    q.push({a-1,b});
                }
                if( a<grid.size()-1 && grid[a+1][b]=='1' && isvisited[a+1][b]!=1 ){
                    isvisited[a+1][b]=1;
                    q.push({a+1,b});
                }
                 
            }

    }
    int numIslands(vector<vector<char>>& grid) {
        vector<vector<int>>isvisited(grid.size(),vector<int>(grid[0].size(),0));
        int count=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(isvisited[i][j]!=1 && grid[i][j]=='1'){
                      count++;
                      bfs(grid,isvisited,i,j);
                }
            }
        }
        return count;
    }
};