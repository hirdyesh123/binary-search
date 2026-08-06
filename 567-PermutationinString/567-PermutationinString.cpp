// Last updated: 8/6/2026, 1:14:57 PM
1class Solution {
2public:
3    vector<int> hash = vector<int>(26, 0);
4
5    bool check(){
6        for(int i=0;i<26;i++){
7            if(hash[i]!=0) return false;
8        }
9        return true;
10    }
11    bool checkInclusion(string s1, string s2) {
12        if(s1.size()>s2.size()) return false;
13        
14        for(int i=0;i<s1.size();i++){
15            int idx=s1[i]-'a';
16            hash[idx]++;
17        }
18        int i=0;
19        int j=0;
20        while(j<s2.size()){
21            hash[s2[j]-'a']--;
22            if(hash[s2[j]-'a']<0){
23               while(hash[s2[j]-'a']<0){
24                hash[s2[i]-'a']++;
25                i++;
26               }
27            }
28            else if(hash[s2[j]-'a']==0 && check()) return true;
29
30            j++;
31        }
32        return false;
33    }
34};