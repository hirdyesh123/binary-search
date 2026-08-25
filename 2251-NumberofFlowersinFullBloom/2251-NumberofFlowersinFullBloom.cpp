// Last updated: 8/25/2026, 12:52:54 PM
1class Solution {
2public:
3    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
4        vector<int>start;
5        vector<int>end;
6        vector<int>ans(people.size(),0);
7        for(int i=0;i<flowers.size();i++){
8            start.push_back(flowers[i][0]);
9            end.push_back(flowers[i][1]);
10        }
11        sort(start.begin(),start.end());
12        sort(end.begin(),end.end());
13
14        for(int i=0;i<people.size();i++){
15            int x=upper_bound(start.begin(),start.end(),people[i])-start.begin();
16            int y=lower_bound(end.begin(),end.end(),people[i])-end.begin();
17            ans[i]=x-y;
18        }
19        return ans;
20    }
21};