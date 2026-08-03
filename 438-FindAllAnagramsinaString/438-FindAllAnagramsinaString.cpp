// Last updated: 8/3/2026, 1:58:06 PM
1class Solution {
2public:
3    bool check(vector<int>&counter){
4        for(int i=0;i<counter.size();i++){
5            if(counter[i]!=0) return false;
6        }
7        return true;
8    }
9    vector<int> findAnagrams(string s, string p) {
10        if(p.size()>s.size()) return {};
11        vector<int>ans;
12        vector<int>counter(26,0);
13        for(int i=0;i<p.size();i++){
14            int index=p[i]-'a';
15            counter[index]++;
16        }
17
18        int i=0;
19        int j=0;
20        int k=p.size();
21        while(j<s.size()){
22           counter[s[j]-'a']--;
23           if(j-i+1==k){
24            if(check(counter)) ans.push_back(i);
25            counter[s[i]-'a']++;
26            i++;
27           }
28
29           j++;
30        }
31        return ans;
32    }
33};