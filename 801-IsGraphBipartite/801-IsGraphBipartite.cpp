// Last updated: 7/28/2026, 9:56:39 PM
class Solution {
public:
    bool isBipartite(vector<vector<int>>& nums) {
        int n = nums.size();
        vector<int> colour(n, -1);

        for(int start = 0; start < n; start++) {

            if(colour[start] != -1) continue;

            queue<int> q;
            colour[start] = 0;
            q.push(start);

            while(!q.empty()) {
                int node = q.front();
                q.pop();

                for(int neighbour : nums[node]) {

                    if(colour[neighbour] == -1) {
                        colour[neighbour] = 1 - colour[node];
                        q.push(neighbour);
                    }
                    else if(colour[neighbour] == colour[node]) {
                        return false;
                    }
                }
            }
        }

        return true;
    }
};