// Last updated: 9/15/2026, 11:08:29 AM
1class Solution {
2public:
3    vector<string> buildArray(vector<int>& target, int n) {
4        vector<string>ans;
5        unordered_set<int>st;
6        for(auto i:target){
7            st.insert(i);
8        }
9        for(int i=1;i<=*max_element(target.begin(),target.end());i++){
10            if(st.find(i)!=st.end()) ans.push_back("Push");
11            else {
12                ans.push_back("Push");
13                ans.push_back("Pop");
14            }
15        }
16        return ans;
17    }
18};