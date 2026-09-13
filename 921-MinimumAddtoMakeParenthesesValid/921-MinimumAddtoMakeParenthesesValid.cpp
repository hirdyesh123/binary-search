// Last updated: 9/13/2026, 8:36:12 PM
1class Solution {
2public:
3    int minAddToMakeValid(string s) {
4        stack<char>st;
5        for(auto i:s){
6            
7             if(!st.empty() && i==')' && st.top()=='(') st.pop();
8            else st.push(i);
9        }
10        return st.size();
11    }
12};