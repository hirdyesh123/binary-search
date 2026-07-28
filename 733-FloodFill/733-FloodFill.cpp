// Last updated: 7/28/2026, 9:56:46 PM
class Solution {
public: 
     void bfs(vector<vector<int>>&nums,int sr,int sc,int colour,int original){
        queue<pair<int,int>>q;
        q.push({sr,sc});
        nums[sr][sc]=colour;
        while(!q.empty()){
            auto node=q.front();
            q.pop();
            int a=node.first;
            int b=node.second;
            if(a<nums.size()-1 && nums[a+1][b]==original ) {
                nums[a+1][b]=colour;
                q.push({a+1,b});
            }
            if(b<nums[0].size()-1 && nums[a][b+1]==original){
                nums[a][b+1]=colour;
                q.push({a,b+1});
            }
            if(a>0 && nums[a-1][b]==original){
                nums[a-1][b]=colour;
                q.push({a-1,b});
            }
            if(b>0 && nums[a][b-1]==original){
                nums[a][b-1]=colour;
                q.push({a,b-1});
            }
        }
     }
    vector<vector<int>> floodFill(vector<vector<int>>& nums, int sr, int sc, int color) {
        int original=nums[sr][sc];
        if (original == color) return nums;
        bfs(nums,sr,sc,color,original);
        return nums;
       
    }
};