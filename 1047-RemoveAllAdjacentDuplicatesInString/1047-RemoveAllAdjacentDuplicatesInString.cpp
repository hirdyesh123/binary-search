// Last updated: 9/10/2026, 10:49:34 AM
1class Solution {
2public:
3    string removeDuplicates(string s) {
4        string ans="";
5        stack<char>st;
6        for(auto i:s){
7            if(!st.empty() && st.top()==i) st.pop();
8
9            else st.push(i);
10        }
11        while(!st.empty()){
12            ans=st.top()+ans;
13            st.pop();
14        }
15        return ans;
16    }
17};