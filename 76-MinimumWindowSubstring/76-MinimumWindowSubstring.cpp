// Last updated: 8/4/2026, 2:37:48 PM
1class Solution {
2public:
3    int climbStairs(int n) {
4      vector<int>tanvika(n+1,0);
5      if(n==1) return 1;
6      if(n==2) return 2;
7      tanvika[1]=1;
8      tanvika[2]=2;
9
10      for(int i=3;i<=n;i++){
11        tanvika[i]=tanvika[i-1]+tanvika[i-2];
12      }
13      return tanvika[n];
14    }
15};