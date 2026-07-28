// Last updated: 7/28/2026, 9:55:00 PM
class Solution {
public:
    string removeStars(string s) {
        string ans;

        for (char c : s) {
            if (c == '*')
                ans.pop_back();
            else
                ans.push_back(c);
        }

        return ans;
    }
};