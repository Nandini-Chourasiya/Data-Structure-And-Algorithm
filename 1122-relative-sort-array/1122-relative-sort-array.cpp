class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int> mp;
        for(auto x : arr1)
            mp[x]++;
        vector<int> ans;
        for(auto x : arr2){
            while(mp[x] > 0){
                ans.push_back(x);
                mp[x]--;
            }
        }
        vector<int> left;
        for(auto x : arr1){
            if(mp[x] > 0){
                left.push_back(x);
                mp[x]--;
            }
        }
        sort(left.begin(), left.end());
        for(auto x : left)
            ans.push_back(x);
        return ans;
    }
};