// Last updated: 7/28/2026, 9:56:37 PM
class Solution {
public:
    bool dfs(vector<vector<int>>&graph,vector<int>&isvisited,vector<int>&pathvisited,int node){
        isvisited[node]=1;
        pathvisited[node]=1;
        for(auto i:graph[node]){
            if(isvisited[i]!=1){
                if(dfs(graph,isvisited,pathvisited,i)) return true;
            }
            else {
                if(pathvisited[i]==1) return true;
            }
        }
        pathvisited[node]=0;
        return false;
    }
    bool checker(vector<vector<int>>&graph,int i){
       vector<int>isvisited(graph.size(),0);
       vector<int>pathvisited(graph.size(),0);
       if(dfs(graph,isvisited,pathvisited,i)) return true;
    
       return false;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<int>ans;
        
        for(int i=0;i<graph.size();i++){
             if( checker(graph,i)==false) ans.push_back(i);
        }
        return ans;
    }
};