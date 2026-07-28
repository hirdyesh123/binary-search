// Last updated: 7/28/2026, 9:59:11 PM
class Solution {
public:
void reverse(vector<int>&nums,int i,int j){
    while(i<j){
       swap(nums[i],nums[j]);
       i++;
       j--;
    }
}
    void nextPermutation(vector<int>& nums) {
        int idx=-1;
        int ngi=-1;
        bool flag= false;
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                idx=i;
                flag=true;
                break;
            }
        }
      

    if(flag==true) {
        reverse(nums,idx+1,nums.size()-1);
        for(int i=idx+1;i<nums.size();i++){
            if(nums[i]>nums[idx]) {
                ngi=i;
                break;
            }
        }
     swap(nums[idx],nums[ngi]);
    }
    else{
        sort(nums.begin(),nums.end());
    }
    
      

    }
};