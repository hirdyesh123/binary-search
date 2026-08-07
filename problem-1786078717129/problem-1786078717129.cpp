// Last updated: 8/7/2026, 10:28:37 AM
1class Solution {
2public:
3    string frequencySort(string s) {
4         unordered_map<char,int>map;
5         priority_queue<pair<int,char>>pq;
6         for(auto i:s){
7            map[i]++;
8         }
9         for(auto &i:map){
10            pair<int,char>temp;
11            temp.first=i.second;
12            temp.second=i.first;
13            pq.push(temp);
14         }
15         int i=0;
16         while(!pq.empty()){
17             auto x=pq.top();
18             pq.pop();
19             while(x.first!=0){
20                s[i]=x.second;
21                i++;
22                x.first--;
23             }
24        }   
25         return s;
26    }
27};