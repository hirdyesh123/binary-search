// Last updated: 9/10/2026, 11:56:14 AM
1class Solution {
2public:
3    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
4        stack<int>st;
5        int i=0;
6        int j=0;
7        while(i<pushed.size()){
8            st.push(pushed[i]);
9            while(!st.empty() && st.top()==popped[j]){
10                st.pop();
11                j++;
12            }
13            i++;
14        }
15        if(st.empty()) return true;
16        return false;
17    }
18};