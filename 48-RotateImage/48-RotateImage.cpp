// Last updated: 7/28/2026, 9:59:02 PM
class Solution {
public:
void revers(vector<vector<int>>&arr,int a,int i ,int j){
    
}
    void rotate(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size()-1;i++){
            for(int j=i+1;j<matrix[0].size();j++){
             swap( matrix[i][j],matrix[j][i]);
            }
        }
     for(int i=0;i<matrix.size();i++){
     //   revers(matrix,i,0,)
       reverse(matrix[i].begin(),matrix[i].end());
     }
    }
};