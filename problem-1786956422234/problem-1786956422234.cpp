// Last updated: 8/17/2026, 2:17:02 PM
1class Solution {
2public:
3    vector<int> spiralOrder(vector<vector<int>>& nums) {
4        vector<int> ans;
5
6        int rs = 0;
7        int cs = 0;
8        int re = nums.size() - 1;
9        int ce = nums[0].size() - 1;
10
11        while(rs <= re && cs <= ce) {
12
13            // Top row
14            for(int i = cs; i <= ce; i++) {
15                ans.push_back(nums[rs][i]);
16            }
17            rs++;
18
19            // Right column
20            for(int i = rs; i <= re; i++) {
21                ans.push_back(nums[i][ce]);
22            }
23            ce--;
24
25            // Bottom row
26            if(rs <= re) {
27                for(int i = ce; i >= cs; i--) {
28                    ans.push_back(nums[re][i]);
29                }
30                re--;
31            }
32
33            // Left column
34            if(cs <= ce) {
35                for(int i = re; i >= rs; i--) {
36                    ans.push_back(nums[i][cs]);
37                }
38                cs++;
39            }
40        }
41
42        return ans;
43    }
44};