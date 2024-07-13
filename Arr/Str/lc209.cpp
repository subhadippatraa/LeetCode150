class Solution {
public:
    int minSubArrayLen(int k, vector<int>& nums) {
        int minl = INT_MAX;
        int r = 0;
        int l = 0;
        int n = nums.size();
        int sum = 0;

        while (r < n) {
            sum += nums[r];
            r++;
            while (sum >= k) {
                minl = min(minl, r-l);
                sum -= nums[l];
                l++;
            }
        }

        return minl == INT_MAX ? 0 : minl;
    }
};