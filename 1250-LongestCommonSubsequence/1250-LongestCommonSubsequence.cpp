// Last updated: 7/28/2026, 9:55:54 PM
class Solution {
public:
    int dp[1001][1001];
    int helper(string &text1,string &text2,int i,int j){
        if(i>text1.size()-1 || j>text2.size()-1) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int third=0;
        if(text1[i]==text2[j]) third=1+helper(text1,text2,i+1,j+1);
        int first=helper(text1,text2,i+1,j);
        int second=helper(text1,text2,i,j+1);

        return dp[i][j]=max({third,first,second});

    }
    int longestCommonSubsequence(string text1, string text2) {
        memset(dp,-1,sizeof(dp));
        return helper(text1,text2,0,0);
    }
};