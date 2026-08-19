// Last updated: 8/19/2026, 11:35:46 AM
1class Solution {
2public:
3    vector<int>grp1={2,3,4,5};
4    vector<int>grp2={4,5,6,7};
5    vector<int>grp3={6,7,8,9};
6   int check(unordered_set<int>& seats) {
7    bool left = true;
8    bool middle = true;
9    bool right = true;
10
11    for (int i : grp1) {
12        if (seats.count(i)) {
13            left = false;
14            break;
15        }
16    }
17
18    for (int i : grp2) {
19        if (seats.count(i)) {
20            middle = false;
21            break;
22        }
23    }
24
25    for (int i : grp3) {
26        if (seats.count(i)) {
27            right = false;
28            break;
29        }
30    }
31
32    if (left && right)
33        return 2;
34
35    if (left || middle || right)
36        return 1;
37
38    return 0;
39}
40    int maxNumberOfFamilies(int n, vector<vector<int>>& nums) {
41        unordered_map<int,unordered_set<int>>map;
42        int ans=0;
43        for(int i=0;i<nums.size();i++){
44            int a=nums[i][0];
45            int b=nums[i][1];
46            map[a].insert(b);
47        }
48      
49        ans=(n-map.size())*2;
50        for(auto i : map){
51           ans=ans+check(i.second);
52        }
53        return ans;
54    }
55};