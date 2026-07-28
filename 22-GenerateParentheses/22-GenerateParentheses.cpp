// Last updated: 7/28/2026, 9:59:15 PM
class Solution {
public:
     bool check(string a){
        stack<char>st;
        for(int i=0;i<a.size();i++){
           if(a[i]=='(') st.push(a[i]);
           else if( !st.empty() && (st.top()=='(' && a[i]==')')) st.pop();
           else return false;
        }
        if(st.size()==0) return true;
        return false;
     }
     void helper(vector<string>&ans,string temp,int n,int i){
        if(i==n*2){
            if(check(temp)) ans.push_back(temp);
            return;
        }
        
        helper(ans,temp+"(",n,i+1);
       
        helper(ans,temp+")",n,i+1);
        
       
     }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        
        helper(ans,"(",n,1);
        return ans;
    }
};