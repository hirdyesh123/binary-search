// Last updated: 7/28/2026, 9:55:50 PM
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>m;
        unordered_set<int>s;
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
           
        }
        for(auto ele: m){
            int key= ele.second;
            if(s.find(key)!=s.end()) return false;
           else s.insert(key);
        }
        return true;
    }
};