// Last updated: 8/8/2026, 1:34:23 AM
1class Solution {
2public:
3    using p=pair<double,int>;
4    vector<vector<int>> kClosest(vector<vector<int>>& nums, int k) {
5        priority_queue<p,vector<p>,greater<p>>pq;
6        vector<vector<int>>ans;
7
8        for(int i=0;i<nums.size();i++){
9            pair<double,int>temp;
10            temp.first=sqrt(nums[i][0]*nums[i][0]+nums[i][1]*nums[i][1]);
11            temp.second=i;
12            pq.push(temp);
13        }
14        while(k--){
15            auto front=pq.top();
16            pq.pop();
17            ans.push_back(nums[front.second]);
18        }
19        return ans;
20    }
21};