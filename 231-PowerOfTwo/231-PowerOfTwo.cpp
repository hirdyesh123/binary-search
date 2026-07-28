// Last updated: 7/28/2026, 9:57:36 PM
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) return false; 

        long long x= n & (n-1);
        if(x==0) return true;
        return false;
    }
};