// Last updated: 8/8/2026, 1:59:45 AM
1class Solution {
2public:
3    int halveArray(vector<int>& nums) {
4        double sum=0;
5        int count=0;
6        priority_queue<double>pq;
7        for(int i=0;i<nums.size();i++){
8            sum+=nums[i];
9            pq.push(nums[i]);
10        }
11        double currsum=sum;
12        sum=sum/2;
13       while(!pq.empty() && currsum>sum){
14         double front=pq.top();
15         pq.pop();
16         currsum=currsum-front/2;
17         pq.push(front/2);
18         count++;
19       }
20       return  count;
21    }
22};