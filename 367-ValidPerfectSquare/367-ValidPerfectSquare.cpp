// Last updated: 7/28/2026, 9:57:12 PM
class Solution {
public:
    bool isPerfectSquare(int num) {
        int low =0;
        int high= num;
          while(low<=high){
            long long mid=low+(high-low)/2;
            if(mid*mid==num) return true;
            if(mid*mid>num) high=mid-1;
            if(mid*mid<num) low=mid+1;
        }
     return false;
    }
};