// Last updated: 7/28/2026, 9:57:01 PM
class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& nums) {
        int n=nums.size();
        int m=nums[0].size();
        vector<vector<int>>isvisited(n,vector<int>(m,0));
        vector<vector<int>>distance(n,vector<int>(m,0));
        queue<pair<int,pair<int,int>>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(nums[i][j]==0){
                    isvisited[i][j]=1;
                    q.push({0,{i,j}});
                }
            }
        }

        while(!q.empty()){
            auto node =q.front();
            q.pop();
            int c=node.first;// distance
            int a=node.second.first;//i
            int b=node.second.second;//j
             distance[a][b]=c;
            if(a<n-1 && isvisited[a+1][b]!=1){
                isvisited[a+1][b]=1;
                q.push({c+1,{a+1,b}});
            }
            if(a>0 && isvisited[a-1][b]!=1){
                isvisited[a-1][b]=1;
                q.push({c+1,{a-1,b}});
            }
             if(b<m-1 && isvisited[a][b+1]!=1){
                isvisited[a][b+1]=1;
                q.push({c+1,{a,b+1}});
            }
            if(b>0 && isvisited[a][b-1]!=1){
                isvisited[a][b-1]=1;
                q.push({c+1,{a,b-1}});
            }
            
        }
        return distance;
            
    }
};