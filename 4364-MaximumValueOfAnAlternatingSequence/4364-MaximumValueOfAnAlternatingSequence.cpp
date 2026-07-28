// Last updated: 7/28/2026, 9:54:32 PM
class Solution {
public:
    long long maximumValue(int n, int s, int m) {
        if(n==1) return 1LL*s;
       long long newn=1LL*(n/2);
        long long newm=newn-1;

        return 1LL* ((newn*m)-newm)+s;
    }
};