// Last updated: 8/14/2026, 10:09:14 AM
1class Solution {
2public:
3    int maximumLengthSubstring(string s) {
4        vector<int>hash(26,0);
5        int ans=0;
6        int i=0;
7        int j=0;
8         while(j<s.size()){
9            hash[s[j]-'a']++;
10            while(hash[s[j]-'a']>2){
11                hash[s[i]-'a']--;
12                i++;
13            }
14            ans=max(ans,j-i+1);
15            j++;
16         }
17         return ans;
18    }
19};