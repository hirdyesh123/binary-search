// Last updated: 7/28/2026, 9:56:44 PM
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& nums) {
        stack<int>st;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0) st.push(nums[i]);
            else {
            
                while (!st.empty() && abs(nums[i]) > abs(st.top()) && st.top() > 0)  st.pop();
                if(!st.empty() && st.top()==abs(nums[i])) st.pop();
                 else if(st.empty() || st.top()<0) st.push(nums[i]);
             }
            
        }
        while(st.size()>0){
            int x=st.top();
            ans.push_back(x);
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};