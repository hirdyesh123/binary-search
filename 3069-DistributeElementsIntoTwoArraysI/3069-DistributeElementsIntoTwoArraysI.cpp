// Last updated: 8/20/2026, 9:42:01 PM
1class Solution {
2public:
3    vector<int> resultArray(vector<int>& nums) {
4        vector<int>v1;
5        vector<int>v2;
6        int prevv1=nums[0];
7        int prevv2=nums[1];
8        v1.push_back(prevv1);
9        v2.push_back(prevv2);
10        int j=2;
11        while(j<nums.size()){
12           if(prevv1>prevv2){
13            v1.push_back(nums[j]);
14            prevv1=nums[j];
15           }
16           else{
17            v2.push_back(nums[j]);
18            prevv2=nums[j];
19           }
20           j++;
21        }
22        int i=0;
23        while(i<v1.size()){
24            nums[i]=v1[i];
25            i++;
26        }
27        i=0;
28        while(i<v2.size()){
29            nums[i+v1.size()]=v2[i];
30            i++;
31        }
32        return nums;
33    }
34};