// Last updated: 8/5/2026, 3:20:23 PM
1class Solution {
2public:
3    int smallestNumber(int n, int t) {
4         int temp;
5        while(true){
6            temp=n;
7            int mult=1;
8            while(temp>0){
9               int val=temp%10;
10               temp=temp/10;
11               mult=mult*val;
12            }
13            if(mult%t==0) return n;
14            n++;
15        }
16        return 0;
17    }
18};