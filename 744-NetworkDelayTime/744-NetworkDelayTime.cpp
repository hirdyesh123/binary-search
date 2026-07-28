// Last updated: 7/28/2026, 9:56:42 PM
class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<int>dist(n+1,1e9);
        dist[0]=-1;
        dist[k]=0;
        vector<pair<int,int>>graph[n+1];
        for(auto i:times){
            int weight=i[2];
            int node=i[0];
            int innode=i[1];
            graph[node].push_back({innode,weight});
        }
        queue<int>q;
        q.push(k);
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto i: graph[node]){
                int innode=i.first;
                int weight=i.second;
                if(dist[node]+weight<dist[innode]){
                    dist[innode]=dist[node]+weight;
                    q.push(innode);
                }
            }
        }
         int maxi=INT_MIN;
        for(int i=1;i<dist.size();i++){
             if(dist[i]==1e9) return -1;
             else{
                if(maxi<dist[i]) maxi=max(maxi,dist[i]);
             }
        }
        return maxi;
    }
};