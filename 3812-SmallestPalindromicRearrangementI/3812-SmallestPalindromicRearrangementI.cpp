// Last updated: 7/28/2026, 9:54:48 PM
class Solution {
public:
    string smallestPalindrome(string s) {
        int n=s.size();
       if (n % 2 == 0) {
    sort(s.begin(), s.begin() + n/2);
    sort(s.begin() + n/2, s.end());
    reverse(s.begin() + n/2, s.end());
} else {
    sort(s.begin(), s.begin() + n/2);
    sort(s.begin() + n/2 + 1, s.end());
    reverse(s.begin() + n/2 + 1, s.end());
}
        return s;
    }
};