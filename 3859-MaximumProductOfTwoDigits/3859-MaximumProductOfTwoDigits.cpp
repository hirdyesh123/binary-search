// Last updated: 7/28/2026, 9:54:46 PM
class Solution {
public:
    int maxProduct(int n) {
        int max2=0;
        int max1=0;

        while(n>0){
            int num=n%10;
            n=n/10;
            if(max1<num) {
                max2=max1;
                max1=num;
            }
            else if(max2<num) max2=num;
        }

        return max1*max2;
    }
};