// Last updated: 8/21/2026, 11:26:44 PM
1class Solution {
2public:
3    vector<int> dailyTemperatures(vector<int>& nums) {
4        vector<int>ans(nums.size());
5        vector<int>ngi(nums.size());
6        stack<int>st;
7        ngi[nums.size()-1]=-1;
8        st.push(nums.size()-1);
9        for(int i=nums.size()-2;i>=0;i--){
10            while(!st.empty() && nums[st.top()]<=nums[i]) st.pop();
11            if(st.empty()) ngi[i]=-1;
12            else ngi[i]=st.top();
13            st.push(i);
14        }       //1 2 6 5 5 6 -1 -1 
15       for(int i=0;i<nums.size();i++){
16         if(ngi[i]==-1) ans[i]=0;
17         else  ans[i]=ngi[i]-i;
18       }
19      return ans;
20    }
21};