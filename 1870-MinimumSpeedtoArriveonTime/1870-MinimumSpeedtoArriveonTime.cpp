// Last updated: 9/3/2026, 7:32:34 PM
1class Solution {
2public:
3    bool check(vector<int>&nums,int mid,double hour){
4        double temp=0;
5        for(int i=0;i<nums.size()-1;i++){
6            temp+=ceil(double(nums[i])/double(mid));
7        }
8        temp+=((double)nums[nums.size()-1]/(double)mid);
9        if(hour>=temp) return true;
10        return false;
11        
12    }
13
14    int minSpeedOnTime(vector<int>& nums, double hour) {
15        int low=1;
16        int high=1e9;
17        if (hour <= nums.size() - 1)
18            return -1; 
19        while(low<high){
20            int mid=low+(high-low)/2;
21            if(check(nums,mid,hour)) {
22                high=mid;
23
24            }
25            else low=mid+1;
26        }
27        
28        return high;
29    }
30};