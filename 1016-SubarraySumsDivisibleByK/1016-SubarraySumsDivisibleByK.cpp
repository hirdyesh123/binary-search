// Last updated: 7/28/2026, 9:56:17 PM
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int counter=0;
        unordered_map<int,int>m;    //val,freq;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(((sum % k) + k) % k==0) counter++;
            if(m.find(((sum % k) + k) % k)!=m.end()){
                 counter+=m[((sum % k) + k) % k];
            }
            
            m[((sum % k) + k) % k]++;
        }
        return counter;
    }
};