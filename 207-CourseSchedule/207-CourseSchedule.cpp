// Last updated: 7/28/2026, 9:57:46 PM
class Solution {
public:
    bool canFinish(int N, vector<vector<int>>& nums) {
        vector<int>indegree(N,0);
        vector<vector<int>>adj(N);
        queue<int>q;
        for(int i=0;i<nums.size();i++){
             int y=nums[i][1];                     //0 1 2 4 5
             indegree[y]++;                        //1 1 1 1 1
        }
        for(int i=0;i<nums.size();i++){
             int x= nums[i][0];
             int y= nums[i][1];
             adj[x].push_back(y);
        }
        for(int i=0;i<N;i++){
            if(indegree[i]==0) q.push(i);
        }
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto i:adj[node]){
                indegree[i]--;
                if(indegree[i]==0) q.push(i);
            }
        }
        for(int i=0;i<N;i++){
            if(indegree[i]!=0) return false;
        }
        return true;
    }
};