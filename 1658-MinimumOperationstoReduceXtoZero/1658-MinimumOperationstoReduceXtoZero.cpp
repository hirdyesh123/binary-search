// Last updated: 8/18/2026, 9:07:05 PM
1class Solution {
2public:
3   
4    int minOperations(vector<int>& nums, int x) {
5        int sum=0;
6        int maxlength=0;
7        for(int i=0;i<nums.size();i++){
8            sum+=nums[i];
9        }
10        sum=sum-x;
11     
12        int i=0;
13        int j=0;
14        int temp=0;
15         if (sum == 0) return nums.size();
16         if(sum<0) return -1;
17    
18        while(j<nums.size()){
19            temp=temp+nums[j];
20            while(temp>sum){
21                temp=temp-nums[i];
22                i++;
23            }
24            if(sum==temp) maxlength=max(maxlength,j-i+1);
25            j++;
26        }
27        if(maxlength==0) return -1;
28        return nums.size()-maxlength;
29    }
30};