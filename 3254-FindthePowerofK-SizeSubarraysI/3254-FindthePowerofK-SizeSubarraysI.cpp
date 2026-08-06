// Last updated: 8/6/2026, 1:29:39 PM
1class Solution {
2public:
3    int helper(vector<int>&nums,int i,int j){
4        bool flag=true;
5        for(int a=i;a<j;a++){
6            if(nums[a]>=nums[a+1] || nums[a]+1!=nums[a+1]){
7                flag=false;
8                break;
9            }
10            
11        }
12        if(!flag) return -1;
13        return nums[j];
14    }
15    vector<int> resultsArray(vector<int>& nums, int k) {
16        vector<int>ans;
17        int i=0;
18        int j=0;
19        while(j<nums.size()){
20            if(j-i+1>k) i++;
21            if(j-i+1==k) ans.push_back(helper(nums,i,j));
22            j++;
23        }
24        return ans;
25    }
26};