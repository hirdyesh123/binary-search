// Last updated: 7/28/2026, 9:55:24 PM
class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int>q;
        for(int i=1;i<=n;i++){
            q.push(i);
        }
         int ans=0;
        while(!q.empty()){
            
            if(n==k) k=n;
            else k=k%n;
            for(int i=1;i<=k-1;i++){
                int temp=q.front();
                q.pop();
                q.push(temp);
            }
            ans=q.front();
            q.pop();
        }
        return ans;
    }
};