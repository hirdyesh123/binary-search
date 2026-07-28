class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int temp=1;
        unordered_set<int>s;
        for(int i:arr){
            s.insert(i);
        }
        int vark=0;
        for(int i=1;i<=100000;i++){
           if(s.find(i)==s.end()){
            vark++;
           }
           if(vark==k) return i;
        }
        return -1;
    }
};