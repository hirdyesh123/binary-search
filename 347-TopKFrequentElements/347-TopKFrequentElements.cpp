// Last updated: 7/28/2026, 9:57:13 PM
class Solution {
public:
typedef pair<int,int> pi;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
         
     priority_queue<pi,vector<pi>,greater<pi>> pq;

       for(auto x: m){
        int ele=x.first;
        int freq= x.second;
        pair<int,int> p={freq,ele};
        pq.push(p);
        if(pq.size()>k) pq.pop();
       }
        
     vector<int>ans;

     while(pq.size()>0){
        int y= pq.top().second;
        ans.push_back(y);
        pq.pop();
     }
   
    return ans;
      
    }
};