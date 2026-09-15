// Last updated: 9/15/2026, 11:22:08 AM
1class Solution {
2public:
3    string minRemoveToMakeValid(string s) {
4        vector<bool>flag(s.size(),false);
5        stack<pair<char,int>>st;  //char,index
6        string ans="";
7        for(int i=0;i<s.size();i++){
8            if(s[i]==')' || s[i]=='('){
9                if(!st.empty() && st.top().first=='(' && s[i]==')') st.pop();
10                else st.push({s[i],i});
11            }
12            else continue;
13        }
14        while(!st.empty()){
15            auto x=st.top();
16            st.pop();
17            flag[x.second]=true;
18        }
19        for(int i=0;i<flag.size();i++){
20            if(flag[i]==false) ans.push_back(s[i]);
21        }
22        return ans;
23    }
24};