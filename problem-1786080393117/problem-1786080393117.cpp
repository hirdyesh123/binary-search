// Last updated: 8/7/2026, 10:56:33 AM
1class Solution {
2public:
3
4    int minStoneSum(vector<int>& nums, int k) {
5        priority_queue<int>pq;
6        for(int i=0;i<nums.size();i++){
7            pq.push(nums[i]);
8        }
9        for(int i=1;i<=k;i++){
10              int front=pq.top();
11              pq.pop();
12              int temp=front-(front/2);
13              cout<<temp<<endl;
14              pq.push(temp);
15        }
16        int sum=0;
17      while(!pq.empty()){
18         sum=sum+pq.top();
19         pq.pop();
20      }
21      return sum;
22    }
23};