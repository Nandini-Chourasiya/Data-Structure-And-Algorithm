class Solution {
public:
    void solve(vector<int>& candidates, int target,vector<int> &ans1 ,vector<vector<int>> &ans2,int index){
       
        if( index >= candidates.size() || target < 0 )
        return ;
        if( target == 0){
         ans2.push_back(ans1);
        }

        for(int i=index;i<candidates.size();i++){
         ans1.push_back(candidates[i]);
         solve(candidates,target-candidates[i],ans1,ans2,i);
         ans1.pop_back();
        } 
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> ans1;
        vector<vector<int>> ans2;
        solve(candidates,target,ans1,ans2,0);
        return ans2;
    }
};