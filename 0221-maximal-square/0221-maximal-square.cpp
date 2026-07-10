class Solution {
public:
      int solve(vector<vector<char>>& mat,int i,int j , int &maxi, vector<vector<int>> &dp){
        
        if( i >= mat.size() || j >= mat[0].size()) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        
        int right = solve(mat,i,j+1,maxi,dp) ;
        int dia = solve(mat,i+1,j+1,maxi,dp) ;
        int bottom = solve(mat,i+1,j,maxi,dp);
        
        if( mat[i][j] == '1'){
           int ans =1+ min(right,min(dia,bottom));
           dp[i][j] = ans;
           maxi = max(maxi,ans);
           return dp[i][j];
        }else{
            dp[i][j] = 0;
            return 0;
        }
    }
    int maximalSquare(vector<vector<char>>& mat) {
         int maxi = 0;
        vector<vector<int>> dp(mat.size(),vector<int>(mat[0].size(),-1));
       for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[0].size();j++){
            solve(mat,i,j,maxi,dp);
        }
}
     
        return maxi*maxi;
    }
};