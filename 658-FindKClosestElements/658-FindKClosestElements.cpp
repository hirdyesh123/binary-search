// Last updated: 7/28/2026, 9:56:48 PM
class Solution {
public:
typedef pair<int,int> pi;
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pi> pq;
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            pair<int,int>p={ abs(x-arr[i]) , arr[i]  };
            pq.push(p);

        }
        while(pq.size()>k){
             pq.pop();
        }
        while(pq.size()>0){
            int y= pq.top().second;
            ans.push_back(y);
            pq.pop();
        }
         sort(ans.begin(),ans.end());
        return ans;
    }
};