// Last updated: 7/28/2026, 9:56:10 PM
class Solution {
public:
    void bfs(vector<vector<int>>&nums,vector<vector<int>>&isvisited,queue<pair<int,int>>&q){
        while(!q.empty()){
            auto node=q.front();
            q.pop();
            int a=node.first;
            int b=node.second;
             if(a<nums.size()-1 && isvisited[a+1][b]!=1 && nums[a+1][b]==1){
                isvisited[a+1][b]=1;
                q.push({a+1,b});
             }
             if(a>0 && isvisited[a-1][b]!=1 && nums[a-1][b]==1){
                isvisited[a-1][b]=1;
                q.push({a-1,b});
             }
             if(b<nums[0].size()-1 && isvisited[a][b+1]!=1 && nums[a][b+1]==1){
                isvisited[a][b+1]=1;
                q.push({a,b+1});
             }
              if(b>0 && isvisited[a][b-1]!=1 && nums[a][b-1]==1){
                isvisited[a][b-1]=1;
                q.push({a,b-1});
             }
        }
    }
    int numEnclaves(vector<vector<int>>& nums) {
        vector<vector<int>>isvisited(nums.size(),vector<int>(nums[0].size(),0));
        queue<pair<int,int>>q;
        int ans=0;
        
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums[0].size();j++){
                if(i==0 || j==0 || i==nums.size()-1 || j==nums[0].size()-1){
                    if(nums[i][j]==1) {
                        q.push({i,j});
                        isvisited[i][j]=1;
                    }
                    else isvisited[i][j]=2;

                }
                else if(nums[i][j]==0) isvisited[i][j]=2;
            }
        }
        bfs(nums,isvisited,q);
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums[0].size();j++){
                if(isvisited[i][j]==0) ans++;
            }
        }
        return ans;
    }
};