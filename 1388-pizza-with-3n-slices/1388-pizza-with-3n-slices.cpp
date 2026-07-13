class Solution {
public:
    int solve( int index , int endIndex , vector<int> &slices , int n ,  vector<vector<int>> &dp){

        if( n == 0)
        return 0;

        if( index > endIndex)
        return 0 ;

        if(dp[index][n] != -1)
        return dp[index][n];

        int take = slices[index]+solve(index+2,endIndex,slices,n-1,dp);
        int skip = solve(index+1,endIndex,slices,n,dp);
        dp[index][n] = max(take,skip);
        return dp[index][n];
    }
    int maxSizeSlices(vector<int>& slices) {
        int n = slices.size();
        vector<vector<int>> dp1(n+1,vector<int> (n/3+1,-1));
        vector<vector<int>> dp2(n+1,vector<int> (n/3+1,-1));
        int case1 = solve(0,n-2,slices,n/3,dp1) ;
        int case2 = solve(1,n-1,slices,n/3,dp2) ;
        return max(case1,case2);
    }
};