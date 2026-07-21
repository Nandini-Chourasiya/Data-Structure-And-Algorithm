class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> mp;
        for( auto i : nums){
            mp[i]++;
        }
        
        int duplicate = 0;
        int missing = 0;
        for(int i=1;i<=nums.size();i++){
           if(mp[i] == 0)
           missing = i ;
           if(mp[i] == 2)
           duplicate = i;
        }
        ans.push_back(duplicate);
        ans.push_back(missing);
        return ans;
    }
};
