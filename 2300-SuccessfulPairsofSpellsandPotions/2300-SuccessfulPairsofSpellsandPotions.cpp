// Last updated: 8/13/2026, 11:31:55 PM
1class Solution {
2public:
3    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
4        vector<int>ans;
5        sort(potions.begin(),potions.end());
6        for(int i=0;i<spells.size();i++){
7            int val=spells[i];
8            int low=0;
9            int high=potions.size()-1;
10            while(low<=high){
11                int mid=low+(high-low)/2;
12                if((long long)potions[mid] * val>=success) high=mid-1;
13                else low=mid+1;
14            }
15            ans.push_back(potions.size() - low);
16        }
17        return ans;
18    }
19};