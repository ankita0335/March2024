class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long res = 0;
        int b = -1, left= -1, right= -1;
        for (int i = 0; i < nums.size(); ++i) {
            if (!(minK <= nums[i] && nums[i] <= maxK)) {
                b = i;
            }
            if (nums[i] == minK) {
                left = i;
            }
            if (nums[i] == maxK) {
                right = i;
            }
            res += max(0, min(left, right) - b);
        }
        return res;
    }
};