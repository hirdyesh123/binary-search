// Last updated: 7/28/2026, 9:58:38 PM
class Solution {
public:
    int largestRectangleArea(vector<int>& nums) {
        int ans=0;
        int maxans=INT_MIN;
        vector<int>nge(nums.size());
        nge[nums.size()-1]=nums.size();
        vector<int>pge(nums.size());
        pge[0]=-1;
        stack<int>st;
        stack<int>st2;
        st.push(nums.size()-1);
        st2.push(0);
        for(int i=nums.size()-2;i>=0;i--){
            while(!st.empty() && nums[st.top()]>=nums[i]) st.pop();
            if(st.empty()) nge[i]=nums.size();
            else nge[i]=st.top();
            st.push(i);
        }
        for(int i=1;i<nums.size();i++){
             while(!st2.empty() && nums[st2.top()]>nums[i]) st2.pop();
            if(st2.empty()) pge[i]=-1;
            else pge[i]=st2.top();
            st2.push(i);
        }

        for(int i=0;i<nums.size();i++){
            ans= nums[i]*(nge[i]-pge[i]-1);
            maxans=max(maxans,ans);
        }
        return maxans;
    }
};