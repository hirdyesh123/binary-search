// Last updated: 7/28/2026, 9:59:18 PM
class Solution {
public:
    bool isValid(string s) {
        stack<int>st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='[') st.push(s[i]);
            else if(!st.empty() && (st.top()=='(' && s[i]==')')) st.pop();
             else if(!st.empty() && (st.top()=='{' && s[i]=='}')) st.pop();
              else if(!st.empty() && (st.top()=='[' && s[i]==']')) st.pop();
              else return false;
        }
        if(st.size()==0) return true;
        return false;
    }
};