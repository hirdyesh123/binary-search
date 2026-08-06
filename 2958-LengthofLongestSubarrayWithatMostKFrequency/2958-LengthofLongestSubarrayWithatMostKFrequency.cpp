// Last updated: 8/6/2026, 11:55:57 AM
1class Solution {
2public:
3    int equalSubstring(string s, string t, int maxcost) {
4        int i=0;  //use for traversing in t;
5        int j=0;  //use for traversing in t;
6        int currcost=0;
7        int ans=0;
8        while(j<t.size()){
9            currcost+=abs(s[j]-t[j]);
10            while(currcost>maxcost){
11                currcost-=abs(s[i]-t[i]);
12                i++;
13            }
14            ans=max(ans,j-i+1);
15            j++;
16        }
17        return ans;
18    }
19};