// Last updated: 11/16/2026, 10:42:18 PM
1
2class Solution {
3public:
4    int dp[71][71][71];
5
6    int helper(vector<vector<int>>& nums, int i, int j1, int j2) {
7
8        int n = nums.size();
9        int m = nums[0].size();
10
11        if(j1 < 0 || j1 >= m || j2 < 0 || j2 >= m)
12            return INT_MIN;
13
14        if(i == n-1) {
15            if(j1 == j2) return nums[i][j1];
16            return nums[i][j1] + nums[i][j2];
17        }
18
19        if(dp[i][j1][j2] != -1)
20            return dp[i][j1][j2];
21
22        int sum = nums[i][j1];
23
24        if(j1 != j2)
25            sum += nums[i][j2];
26
27        int x = helper(nums, i+1, j1-1, j2-1);
28        int y = helper(nums, i+1, j1-1, j2);
29        int z = helper(nums, i+1, j1-1, j2+1);
30
31        int a = helper(nums, i+1, j1, j2-1);
32        int b = helper(nums, i+1, j1, j2);
33        int c = helper(nums, i+1, j1, j2+1);
34
35        int d = helper(nums, i+1, j1+1, j2-1);
36        int e = helper(nums, i+1, j1+1, j2);
37        int f = helper(nums, i+1, j1+1, j2+1);
38
39        int ans = max({a,b,c,x,y,z,d,e,f});
40
41        return dp[i][j1][j2] = sum + ans;
42    }
43
44    int cherryPickup(vector<vector<int>>& nums) {
45        memset(dp, -1, sizeof(dp));
46
47        return helper(nums, 0, 0, nums[0].size()-1);
48    }
49};
50