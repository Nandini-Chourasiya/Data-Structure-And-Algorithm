class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        for (int i = 0; i < target.size(); i++) {
            int j = i;
            while (j < arr.size() && arr[j] != target[i]) {
                j++;
            }
            if (j == arr.size()) {
                return false;
            }
            int left = i;
            int right = j;
            while (left < right) {
                swap(arr[left], arr[right]);
                left++;
                right--;
            }
        }
        return true;
    }
};