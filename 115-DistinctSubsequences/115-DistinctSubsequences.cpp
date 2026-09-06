// Last updated: 9/6/2026, 11:55:07 AM
1class Solution {
2public:
3    int dp[1001][1001];
4    int helper(string &s,string &t,int i,int j){
5        if(s.size()<=i || t.size()<=j) return 0;
6        int pick=0;
7        int notpick=0;
8        int temp=0;
9        if(dp[i][j]!=-1) return dp[i][j];
10        if(j==t.size()-1 && s[i]==t[j]) temp++; 
11        if(s[i]==t[j]) pick=temp+helper(s,t,i+1,j+1);
12        notpick=helper(s,t,i+1,j);
13        return dp[i][j]=pick+notpick;
14    }
15    int numDistinct(string s, string t) {
16        if(s.size()<t.size()) return 0;
17        memset(dp,-1,sizeof(dp));
18        return helper(s,t,0,0);
19    }
20};