// Last updated: 7/28/2026, 9:54:30 PM
class Solution {
public:
    bool canReach(vector<int>& start, vector<int>& target) {
        return ((start[0] + start[1]) % 2) ==
               ((target[0] + target[1]) % 2);
    }
};