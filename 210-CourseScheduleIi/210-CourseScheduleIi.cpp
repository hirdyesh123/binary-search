// Last updated: 7/28/2026, 9:57:43 PM
class Solution {
public:
    vector<int> findOrder(int N, vector<vector<int>>& nums) {
         vector<int>indegree(N,0);
        vector<vector<int>>adj(N);
        vector<int>ans;
        queue<int>q;
        for(int i=0;i<nums.size();i++){
             int y=nums[i][0];                     //0 1 2 4 5
             indegree[y]++;                        //1 1 1 1 1
        }
        for(int i=0;i<nums.size();i++){
             int x= nums[i][0];
             int y= nums[i][1];
             adj[y].push_back(x);
        }
        for(int i=0;i<N;i++){
            if(indegree[i]==0) q.push(i);
        }
        while(!q.empty()){
            int node=q.front();
            q.pop();
            ans.push_back(node);
            for(auto i:adj[node]){
                indegree[i]--;
                if(indegree[i]==0) q.push(i);
            }
        }
            if(ans.size() != N)return {};
            
        return ans;
    
    }
};