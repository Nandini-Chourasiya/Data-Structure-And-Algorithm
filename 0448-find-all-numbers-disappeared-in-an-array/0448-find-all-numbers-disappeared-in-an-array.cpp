class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        unordered_map<int,int> mp;
        for( auto n : nums){
            mp[n]++;
        }

        for( int i=1;i<=n;i++){
          if(mp[i] == 0){
            ans.push_back(i);
          }
        }
       return ans ;
    }
}; 