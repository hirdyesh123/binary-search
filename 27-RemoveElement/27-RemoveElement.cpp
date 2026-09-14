// Last updated: 9/14/2026, 10:58:57 PM
1class Solution {
2	public: int removeElement(std::vector < int > & nums, int val) {
3		int j = 0;
4		for(int i: nums)
5			if(i != val) nums[j++] = i;
6		return j;
7	}
8};