class Solution {
public:
    int solve(int index, vector<int>& nums, vector<int>& dp) {
        if (dp[index] != -1)
            return dp[index];
        int ans = 1;
        for (int i = index + 1; i < nums.size(); i++) {
            if (nums[i] > nums[index]) {
                ans = max(ans, 1 + solve(i, nums, dp));
            }
        }
        return dp[index] = ans;
    }

    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, -1);
        int ans = 1;
        for (int i = 0; i < n; i++) {
            ans = max(ans, solve(i, nums, dp));
        }
        return ans;
    }
};