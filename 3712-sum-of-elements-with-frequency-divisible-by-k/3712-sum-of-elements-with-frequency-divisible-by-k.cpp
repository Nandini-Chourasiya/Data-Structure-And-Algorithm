class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {

        unordered_map<int,int> mp;
         for (int x : nums) {
          mp[x]++;
    }

        int sum = 0;
        for( auto y : mp){
            if( y.second % k == 0)
            sum += y.first*y.second;
        }
        return sum;
    }
};