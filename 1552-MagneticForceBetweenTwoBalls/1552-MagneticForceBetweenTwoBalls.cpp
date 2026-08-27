// Last updated: 8/27/2026, 10:12:53 PM
1class Solution {
2public:
3
4    bool possibleToPlace(int force, vector<int>& position, int m) {
5
6        int prev       = position[0];
7        int countBalls = 1;
8
9
10        for(int i = 1; i < position.size(); i++) {
11            int curr = position[i];
12
13            if(curr - prev >= force) {
14                countBalls++;
15                prev = curr;
16            }
17
18            if(countBalls == m)
19                break;
20        }
21
22        return countBalls == m;
23
24    }
25      int maxDistance(vector<int>& position, int m) {
26        int n = position.size();
27        sort(begin(position), end(position));
28
29        int minForce = 1;
30        int maxForce = position[n-1] - position[0]; //better value (comment me batao)
31
32        int result = 0;
33        while(minForce <= maxForce) {
34            int midForce = minForce + (maxForce - minForce)/2;
35
36            if(possibleToPlace(midForce, position, m)) {
37                result = midForce;
38                minForce = midForce+1;
39            } else {
40                maxForce = midForce-1;
41            }
42        }
43
44        return result;
45    }
46};