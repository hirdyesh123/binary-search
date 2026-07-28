// Last updated: 7/28/2026, 9:56:43 PM
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& nums) {
        vector<int>ans(nums.size());
        vector<int>ngi(nums.size());
        stack<int>st;
        ngi[nums.size()-1]=-1;
        st.push(nums.size()-1);
        for(int i=nums.size()-2;i>=0;i--){
            while(!st.empty() && nums[st.top()]<=nums[i]) st.pop();
            if(st.empty()) ngi[i]=-1;
            else ngi[i]=st.top();
            st.push(i);
        }       //1 2 6 5 5 6 -1 -1 
       for(int i=0;i<nums.size();i++){
         if(ngi[i]==-1) ans[i]=0;
         else  ans[i]=ngi[i]-i;
       }
      return ans;
    }
};