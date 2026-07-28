// Last updated: 7/28/2026, 9:54:45 PM
class Solution {
public:
    long long perfectPairs(vector<int>& nums) {
        int n = nums.size();
        vector<long long> a(n);

        for (int i = 0; i < n; i++)
            a[i] = llabs(nums[i]);

        sort(a.begin(), a.end());

        long long ans = 0;
        int left = 0;

        for (int right = 0; right < n; right++) {
            while (a[right] > 2 * a[left]) {
                left++;
            }
            ans += (right - left);
        }
        return ans;
    }
};
