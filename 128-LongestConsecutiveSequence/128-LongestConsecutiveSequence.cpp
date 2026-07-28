// Last updated: 7/28/2026, 9:58:15 PM
class Solution {
public:
int longestConsecutive(vector<int>& nums) {
    if(nums.size()==0) return 0;
     unordered_set<int>st;
     for(int i=0;i<nums.size();i++){
        st.insert(nums[i]);
     }
     int longest=1;
     for(auto ele: st){
        int seq=1;
       if(st.find(ele-1)!=st.end()) continue;
       else {
            while(st.find(ele+1)!=st.end()) {
                ele++;
                seq++;
            }
        }
        longest=max(longest,seq);
     }
     return longest;
 }
};