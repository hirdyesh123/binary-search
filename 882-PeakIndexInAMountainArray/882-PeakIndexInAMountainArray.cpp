// Last updated: 7/28/2026, 9:56:35 PM
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n =arr.size();
        int lo= 1;
        int hi=n-2;
        while(lo<=hi){
            int mid= (lo+hi)/2;
            if((arr[mid]>arr[mid+1])&&(arr[mid]>arr[mid-1])) return mid;
             if((arr[mid]>arr[mid+1])&&(arr[mid]<arr[mid-1])) hi=mid-1;
              if((arr[mid]<arr[mid+1])&&(arr[mid]>arr[mid-1])) lo=mid+1;
        }
        return hi;
    }
};