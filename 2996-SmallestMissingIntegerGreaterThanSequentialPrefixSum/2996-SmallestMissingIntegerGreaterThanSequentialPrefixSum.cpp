// Last updated: 8/11/2026, 1:02:09 PM
1class Solution {
2public:
3    int missingInteger(vector<int>& nums) {
4        unordered_set<int>s;
5        for(int i=0;i<nums.size();i++){
6            s.insert(nums[i]);
7        }
8        int sum=nums[0];
9        int maxsum=nums[0];
10        for(int i=1;i<nums.size();i++){
11            if(nums[i]==nums[i-1]+1) sum=sum+nums[i];
12            else break;
13
14            maxsum=max(maxsum,sum);
15        }
16
17        for(int i =maxsum;i<=100000;i++ ){
18           if(s.find(i)==s.end()) return i;
19        }
20        return 0;
21    }
22};