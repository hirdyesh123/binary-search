// Last updated: 8/15/2026, 10:31:04 AM
1class Solution {
2public:
3    int numOfSubarrays(vector<int>& nums) {
4        long long even=0;
5        long long odd=0;
6        vector<int>prefix(nums.size(),0);
7        int i=0;
8        long long count=0;
9        prefix[0]=nums[0];
10        for(int i=1;i<nums.size();i++){
11            prefix[i]=nums[i]+prefix[i-1];
12        }
13        while(i<prefix.size()){
14            bool flag=false;  //even
15            if(prefix[i]%2==1){  //odd
16                count++; 
17                flag=true;
18            }
19            if(flag){
20                odd++;
21                count=count+even;
22            }else {
23                even++;
24                count=count+odd;
25            }
26           i++;
27        }
28        return count%1000000007;
29    }
30};