// Last updated: 7/28/2026, 9:55:28 PM
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int>q;
        int n= students.size();
        for(int i=0;i<=n-1;i++){
            q.push(students[i]);
        }
        int count=0;
        int i=0;
        while(q.size()>0 && count!=q.size()){
            if(sandwiches[i]==q.front()){
                count=0;
                q.pop();
                i++;
            }
            else {
                q.push(q.front());
                q.pop();
                count++;
            }
        }
        return count;
    }
};