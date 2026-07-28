// Last updated: 7/28/2026, 9:56:59 PM
class Solution {
public:
    void bfs(vector<vector<int>>&isConnected,vector<int>&isvisited,int temp){
        queue<int>q;
        q.push(temp);
        isvisited[temp]=1;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(int i=0;i<isConnected[node].size();i++){
                if(isvisited[i]!=1 && isConnected[node][i]==1){
                    q.push(i);
                    isvisited[i]=1;
                }
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int count=0;
        vector<int>isvisited(isConnected.size(),0);
        for(int i=0;i<isvisited.size();i++){
            if(isvisited[i]!=1){
                count++;
                bfs(isConnected,isvisited,i);
            }
        }
       return count;
    }
};