// Last updated: 8/1/2026, 10:55:22 AM
1class Solution {
2public:
3    bool helper(vector<int>&nums,int player1,int player2,bool check,int i,int j){
4        if(i>j){
5            if(player1>=player2) return true;
6            else return false;
7        }
8        bool one;
9        bool two;
10        if(check){
11          one=helper(nums,player1+nums[i],player2,false,i+1,j);
12          two=helper(nums,player1+nums[j],player2,false,i,j-1);
13          return one||two;
14        }
15        else{
16            one=helper(nums,player1,player2+nums[i],true,i+1,j);
17            two=helper(nums,player1,player2+nums[j],true,i,j-1);
18            return one && two;
19        }
20        
21      return false;
22    }
23    bool predictTheWinner(vector<int>& nums) {
24        return helper(nums,0,0,true,0,nums.size()-1);
25    }
26};