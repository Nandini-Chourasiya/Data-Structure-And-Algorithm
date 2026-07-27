class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int first = nums[n-1];
        int second = nums[n-2];

        return (second-1) * (first-1);
    }
};