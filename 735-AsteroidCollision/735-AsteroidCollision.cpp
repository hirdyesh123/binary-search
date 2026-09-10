// Last updated: 9/10/2026, 12:25:14 PM
1class Solution {
2public:
3    bool check(stack<int>& st, int x) {
4    return st.top() > 0 && x < 0;
5}
6    vector<int> helper(vector<int>&ans,stack<int>&st){
7        while(!st.empty()){
8            ans.push_back(st.top());
9            st.pop();
10        }
11       reverse(ans.begin(),ans.end());
12       return ans;
13    }
14    vector<int> asteroidCollision(vector<int>& nums) {
15         stack<int>st;
16         for(int i=0;i<nums.size();i++){
17            if(st.empty()) st.push(nums[i]);
18            else {
19                while(!st.empty() && check(st,nums[i]) ){
20                    if(abs(st.top())<abs(nums[i])) {
21                        st.pop();
22                    }
23                    else if(abs(st.top())==abs(nums[i])){
24                        st.pop();
25                        nums[i]=0;
26                        break;
27                    }
28                    else {
29                       
30                        nums[i]=0;
31                          break;
32                    }
33                }
34               if(nums[i]!=0) st.push(nums[i]);
35            }
36         }
37         vector<int>ans;
38         return helper(ans,st);
39    }
40};