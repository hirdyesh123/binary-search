// Last updated: 8/25/2026, 11:00:14 AM
1class Solution {
2public:
3    bool check(int i,int k){
4        if(i%k==0) return true;
5        return false;
6    }
7    int missingMultiple(vector<int>& nums, int k) {
8        unordered_set<int>s;
9        for(int &i:nums){
10            s.insert(i);
11        }
12        int i=1;
13        while(true){
14           if(s.find(i)==s.end()){
15              if(check(i,k)) return i;
16           }
17            i++;
18        }
19        return -1;
20    }
21};