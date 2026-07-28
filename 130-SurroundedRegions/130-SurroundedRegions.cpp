// Last updated: 7/28/2026, 9:58:12 PM
class Solution {
public:
    void bfs(vector<vector<char>>&nums,vector<vector<int>>&isvisited,queue<pair<int,int>>&q){
        while(!q.empty()){
            auto node =q.front();
            q.pop();
            int a= node.first;
            int b=node.second;
            if(a<nums.size()-1 && isvisited[a+1][b]!=1 && nums[a+1][b]=='O'){
                isvisited[a+1][b]=1;
                q.push({a+1,b});
            }
            if(a>0 && isvisited[a-1][b]!=1 && nums[a-1][b]=='O'){
                isvisited[a-1][b]=1;
                q.push({a-1,b});
            }
             if(b<nums[0].size()-1 && isvisited[a][b+1]!=1 && nums[a][b+1]=='O'){
                isvisited[a][b+1]=1;
                q.push({a,b+1});
            }
            if(b>0 && isvisited[a][b-1]!=1 && nums[a][b-1]=='O'){
                isvisited[a][b-1]=1;
                q.push({a,b-1});
            }
          }
    }
    void solve(vector<vector<char>>& nums) {
        queue<pair<int,int>>q;
        vector<vector<int>>isvisited(nums.size(),vector<int>(nums[0].size(),0));
       for(int i=0;i<nums.size();i++){
        for(int j=0;j<nums[0].size();j++){
            if(i==0 || j==0 || i==nums.size()-1 || j==nums[0].size()-1){
                if(nums[i][j]=='O'){ 
                    q.push({i,j});
                    isvisited[i][j]=1;
                }
                else if(nums[i][j]=='X') isvisited[i][j]=2;
            }

            else if(nums[i][j]=='X') isvisited[i][j]=2;
        }
       }

       bfs(nums,isvisited,q);
       for(int i=0;i<nums.size();i++){
        for(int j=0;j<nums[0].size();j++){
            if(isvisited[i][j]==2) nums[i][j]='X';
            else if(isvisited[i][j]==1) nums[i][j]='O';
            else if(isvisited[i][j]==0) nums[i][j]='X';
        }
       }
    }
};