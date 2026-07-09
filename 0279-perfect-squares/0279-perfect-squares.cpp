class Solution {
public:
    int solve(int n,vector<int> &dp){
        if(n <= 0)
        return 0;

        if( n == 0)
        return 1;

        if(dp[n] != -1)
        return dp[n];

        int ans = INT_MAX;
        for( int i=1;i*i<=n;i++){
            int a = i*i;
            int v = 1+solve(n-a,dp);
            ans = min(ans,v);
        }
        dp[n] = ans;
        return dp[n];
    }
    int numSquares(int n) {
        vector<int> dp(n+1,-1);
        return solve(n,dp);
    }
};