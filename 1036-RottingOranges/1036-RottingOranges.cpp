// Last updated: 7/28/2026, 9:56:14 PM
class Solution {
public:
    void check2(vector<vector<int>>&grid,vector<vector<int>>&isvisited,int a,int b,queue<pair<int,int>>&q){
        if(b<grid[0].size()-1 && grid[a][b+1]==1 && isvisited[a][b+1]!=1){
            isvisited[a][b+1]=1;
            grid[a][b+1]=2;
            q.push({a,b+1});
        }
        if(b>0 && grid[a][b-1]==1 && isvisited[a][b-1]!=1){
            isvisited[a][b-1]=1;
            grid[a][b-1]=2;
            q.push({a,b-1});
        }
        if(a>0 && grid[a-1][b]==1 && isvisited[a-1][b]!=1){
            isvisited[a-1][b]=1;
            grid[a-1][b]=2;
            q.push({a-1,b});
        }
        if(a<grid.size()-1 && grid[a+1][b]==1 && isvisited[a+1][b]!=1){
            isvisited[a+1][b]=1;
            grid[a+1][b]=2;
            q.push({a+1,b});
        }

    }
    void check(vector<vector<int>>&grid,vector<vector<int>>&isvisited,int &count,queue<pair<int,int>>&q){
        
        while(!q.empty()){
            int size=q.size();
            
            for(int i=0;i<size;i++){
                auto node=q.front();
                q.pop();
                int a=node.first;
                int b=node.second;
                check2(grid,isvisited,a,b,q);
            } 
            if(!q.empty()) count++;
            
        }
    }
    int orangesRotting(vector<vector<int>>& grid) {
        int count=0;
        vector<vector<int>>isvisited(grid.size(),vector<int>(grid[0].size(),0));
        queue<pair<int,int>>q;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                    isvisited[i][j]=1;
                }
            }
        }
        check(grid,isvisited,count,q);
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1) return -1;
            }
        }
        return count;
    }
};