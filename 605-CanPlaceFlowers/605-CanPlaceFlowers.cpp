// Last updated: 9/1/2026, 10:55:26 PM
1class Solution {
2public:
3    bool canPlaceFlowers(vector<int>& nums, int n) {
4        if(n==0) return true;
5        if(nums.size()==1 && nums[0]==0) return true;
6        int i=0;
7        int counter=0;
8        while(i<nums.size()){
9            if(i!=0 && i!=nums.size()-1 &&  nums[i]==0 && nums[i-1]==0 && nums[i+1]==0){
10                nums[i]=1;
11                counter++;
12            }
13            else if(i==0 && nums[i]==0 && nums[i+1]==0){
14                counter++;
15                nums[i]=1;
16            }
17            else if(i==nums.size()-1 && nums[i]==0 && nums[i-1]==0){
18                counter++;
19                nums[i]=1;
20            }
21            i++;
22        }
23        return counter>=n;
24    }
25};