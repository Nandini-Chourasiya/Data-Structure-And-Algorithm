class Solution {
public:
    bool find(vector<int>& nums, int k) {
        int low = 0, high = nums.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == k)
                return true;

            if (nums[mid] < k)
                low = mid + 1;
            else
                high = mid - 1;
        }

        return false;
    }

    int missingMultiple(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());

    for (int i = 1; ; i++) {
        int j = k * i;

        if (!find(nums, j))
            return j;
    }
}
};