// Last updated: 7/28/2026, 9:57:53 PM
class Solution {
public:
  void revers(vector<int>& arr,int i,int j){
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
  }

    void rotate(vector<int>& arr, int k) {
      int n= arr.size();
      k=k%n;
        revers(arr,0,n-k-1);
        revers(arr,n-k,n-1);
        revers(arr,0,n-1);
    }
};