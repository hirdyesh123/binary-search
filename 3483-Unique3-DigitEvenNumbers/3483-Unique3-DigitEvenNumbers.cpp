// Last updated: 9/11/2026, 4:30:48 PM
1class Solution {
2public:
3    bool check(vector<int>map,int i){
4       while(i>0){
5         int x=i%10;
6         i=i/10;
7         if(map[x]>0) map[x]--;
8         else return false;
9       }
10       return true;
11    }
12    int totalNumbers(vector<int>& nums) {
13       int counter=0;
14       vector<int>map(10,0);
15       for(int i=0;i<nums.size();i++){
16         map[nums[i]]++;
17       }
18       for(int i=100;i<=999;i++){
19        if(i%2==1) continue;
20        else {
21            if(check(map,i)) counter++;
22        }
23       }
24       return counter;
25    }
26};